#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/time.h>

#define MAX_CLIENTS	5
#define BUFLEN 256

void error(char *msg)
{
    perror(msg);
    exit(1);
}

typedef struct {
	int nrCard;
	int socket;
} client;

typedef struct {
	char nume[13];
	char prenume[13];
	int nrCard;
	int pin;
	char parola[17];
	double sold;
	int blocked;
} database;

int main(int argc, char *argv[])
{
	 FILE* fin = fopen("users_data_file", "r");

     int sockfd, newsockfd, portno, clilen;
     char buffer[BUFLEN], anotherBuffer[BUFLEN];
     struct sockaddr_in serv_addr, cli_addr;
     int n, i, j, q, w;
     int dim;
     database db;
     char auxCard[6];
     char auxPin[4];
     int nrCard;
     int pin;
     int ok;
     client helper[30];

    struct sockaddr_in my_sockaddr,from_station;
    int sfd;
	int addr_len, nbytes;

	 portno = atoi(argv[1]);

	if ((sfd = socket(AF_INET, SOCK_DGRAM, 0)) == -1) {
		perror("socket");
		exit(1);
	}
	
	/*Setare struct sockaddr_in pentru a asculta pe portul respectiv */
	my_sockaddr.sin_family = AF_INET;
	my_sockaddr.sin_port = htons(portno);
	my_sockaddr.sin_addr.s_addr =inet_addr("127.0.0.1");
	memset(my_sockaddr.sin_zero, '\0', sizeof(my_sockaddr.sin_zero)); 
	
	/* Legare proprietati de socket */
	if (bind(sfd,(struct sockaddr *)&my_sockaddr, sizeof(struct sockaddr)) == -1){
		perror("Bind");
		exit(1);
	}
	
	addr_len = sizeof(struct sockaddr);

     fd_set read_fds;	//multimea de citire folosita in select()
     fd_set tmp_fds;	//multime folosita temporar
     int fdmax;		//valoare maxima file descriptor din multimea read_fds

     fscanf(fin, "%d", &dim);

     database* vector = (database*)malloc(dim *sizeof(database));

     for(i = 0; i < dim; i++) {  // citire din fisier
     	fscanf(fin, "%s %s %d %d %s %lf", db.nume, db.prenume, &db.nrCard, &db.pin, db.parola, &db.sold);
     	db.blocked = 0;
     	vector[i] = db;  // memorare a datelor intr-un vector de structuri
     }

     for(i = 0; i < 30; i++) {  // initializare vector pentru clienti logati
     	helper[i].socket = 0;
     	helper[i].nrCard = 0;
     }

     if (argc < 2) {
         fprintf(stderr,"Usage : %s port\n", argv[0]);
         exit(1);
     }

     //golim multimea de descriptori de citire (read_fds) si multimea tmp_fds
     FD_ZERO(&read_fds);
     FD_ZERO(&tmp_fds);

     sockfd = socket(AF_INET, SOCK_STREAM, 0);
     if (sockfd < 0)
        error("-10 : ERROR opening socket");

    

     memset((char *) &serv_addr, 0, sizeof(serv_addr));
     serv_addr.sin_family = AF_INET;
     serv_addr.sin_addr.s_addr = INADDR_ANY;	// foloseste adresa IP a masinii
     serv_addr.sin_port = htons(portno);

     if (bind(sockfd, (struct sockaddr *) &serv_addr, sizeof(struct sockaddr)) < 0)
              error("-10 : ERROR on binding");

     listen(sockfd, MAX_CLIENTS);

     //adaugam noul file descriptor (socketul pe care se asculta conexiuni) in multimea read_fds
     FD_SET(sockfd, &read_fds);
     FD_SET(0, &read_fds);
     FD_SET(sfd, &read_fds);
     fdmax = sockfd;

     // main loop
	while (1) {
		tmp_fds = read_fds;
		if (select(fdmax + 1, &tmp_fds, NULL, NULL, NULL) == -1)
			error("-10 : ERROR in select");

		for(i = 0; i <= fdmax; i++) {
			if (FD_ISSET(i, &tmp_fds)) {

				if(i == 0) {   // daca se citeste de la tastatura "quit"
					memset(buffer, 0 , BUFLEN);
    				fgets(buffer, BUFLEN-1, stdin);
					if(strncmp(buffer, "quit", 4) == 0) {
						memset(buffer, 0, BUFLEN);
						memcpy(buffer, "quit", 4);
						for(i = 5; i <= fdmax; i++) {  // se cauta in multimea de socketi
							// se trimite mesaj de avertizare pentru inchidere fiecarui socket
							send(i, buffer, strlen(buffer), 0);
							close(i);  // inchidere socket
							FD_CLR(i, &read_fds);
						}
					close(sockfd);  // inchidere socket de ascultare pentru server
					FD_CLR(sockfd, &read_fds);
					return 0;
					}
				}

				if(i == sfd){
					nbytes = recvfrom(sfd, buffer,strlen(buffer),0,(struct sockaddr *)&from_station,&addr_len);
					buffer[nbytes] = '\0';
					int nrC;
					int	valid = 0;
					int contor = 0;
					if(strncmp(buffer, "unlock", 6) == 0) {
					char sir[6];
					sscanf(buffer, "%s %d", sir, &nrC);
					// verifica daca numarul de card este valid
					for(w = 0; w < dim; w++) {
						if(vector[w].nrCard != nrC){
							valid++;
						}
					}
							
					if(valid == dim) {
						memset(buffer, 0, BUFLEN);
						memcpy(buffer, "UNLOCK> -4 : Numar card inexistent", 34);			
						sendto(sfd, buffer, strlen(buffer), 0, (struct sockaddr *)&from_station, sizeof(struct sockaddr));
					} else {
						memset(buffer, 0, BUFLEN);
						memcpy(buffer, "UNLOCK> Trimite parola secreta", 30);			
						sendto(sfd, buffer, strlen(buffer), 0, (struct sockaddr *)&from_station, sizeof(struct sockaddr));
					}
				 	memset(buffer, 0, BUFLEN);
				 	nbytes = recvfrom(sfd, buffer,strlen(buffer),0,(struct sockaddr *)&from_station,&addr_len);
					buffer[nbytes] = '\0';
				 	char parola;
				 	sscanf(buffer, "%d %s", &nrC, parola);
				 	int val;
				 	for(w = 0; w < dim; w++) {
						if(strncmp(vector[w].parola, parola, 6) != 0){
							contor++;
						}  else {
							val = w;
						}
					}
							
					if(contor == dim) {
						memset(buffer, 0, BUFLEN);
						memcpy(buffer, "UNLOCK> -7 : Deblocare esuata", 29);			
						sendto(sfd, buffer, strlen(buffer), 0, (struct sockaddr *)&from_station, sizeof(struct sockaddr));
					} else {
						vector[val].blocked = 0;
						memset(buffer, 0, BUFLEN);
						memcpy(buffer, "UNLOCK> Client deblocat", 23);			
						sendto(sfd, buffer, strlen(buffer), 0, (struct sockaddr *)&from_station, sizeof(struct sockaddr));
					}
				 }
				}

				if (i == sockfd && i != sfd) {
					// a venit ceva pe socketul inactiv(cel cu listen) = o noua conexiune
					// actiunea serverului: accept()
					clilen = sizeof(cli_addr);
					if ((newsockfd = accept(sockfd, (struct sockaddr *)&cli_addr, &clilen)) == -1) {
						error("-10 : ERROR in accept");
					}
					else {
						//adaug noul socket intors de accept() la multimea descriptorilor de citire
						FD_SET(newsockfd, &read_fds);
						if (newsockfd > fdmax) {
							fdmax = newsockfd;
						}
					}
					printf("Noua conexiune de la %s, port %d, socket_client %d\n ", inet_ntoa(cli_addr.sin_addr), ntohs(cli_addr.sin_port), newsockfd);
				}

				else {
					// am primit date pe unul din socketii cu care vorbesc cu clientii
					//actiunea serverului: recv()
					memset(buffer, 0, BUFLEN);
					if ((n = recv(i, buffer, sizeof(buffer), 0)) <= 0) {
						if (n == 0) {
							//conexiunea s-a inchis
							printf("selectserver: socket %d hung up\n", i);
						} else {
							error("-10 : ERROR in recv");
						}
						close(i);
						FD_CLR(i, &read_fds); // scoatem din multimea de citire socketul pe care
					}

					else { //recv intoarce >0
						printf ("socket %d, mesaj: %s\n", i, buffer);

						// verifica daca primeste comanda login
						if(strncmp(buffer, "login", 5) == 0) {
							// retinere numar card si pin
							memcpy(auxCard, &buffer[6], 6);
							memcpy(auxPin, &buffer[13], 4);
							nrCard = atoi(auxCard);
							pin = atoi(auxPin);
							ok = 0;
							// verifica daca numarul de card este valid
							for(w = 0; w < dim; w++) {
								if(vector[w].nrCard != nrCard){
									ok++;
								}
							}
							/* daca ajunge la sfarsitul vectorului si nu il gaseste
							intoarce eroare */
							if(ok == dim) {
								memset(buffer, 0, BUFLEN);
								memcpy(buffer, "ATM> -4 : Numar card inexistent", 31);
								send(i, buffer, strlen(buffer), 0);
							} else {
								ok = 0;
								// verifica daca pinul este valid
								for(w = 0; w < dim; w++) {
									if(vector[w].pin != pin){
										ok++;
									}	
								}
								/* daca am ajuns la sfrasitul vectorului
								atunci pinul este gresit*/
								if(ok == dim) {
									database cl;
									// extrage clientul cu numarul de card dat
									for(w = 0; w < dim; w++) {
										if(vector[w].nrCard == nrCard){
											cl = vector[w];
										}	
									}
									// verifica daca este blocat si intoarce eroare
									if(cl.blocked == 2) {
										memset(buffer, 0, BUFLEN);
										memcpy(buffer, "ATM> -5 : Card blocat", 21);
										send(i, buffer, strlen(buffer), 0);
									} else {
										// daca nu este blocat, intoarce eroare de pin gresit
										for(w = 0; w < dim; w++) {
											if(vector[w].nrCard == nrCard){
												vector[w].blocked++;
											}	
										}
										memset(buffer, 0, BUFLEN);
										memcpy(buffer, "ATM> -3 : Pin gresit", 20);
										send(i, buffer, strlen(buffer), 0);
									}
								} else {
									// daca numar card si pinul sunt valide
									ok = 0;
									// cauta clientul in sesiunea curenta
									for(w = 0; w < 30; w++){
										if(helper[w].nrCard == nrCard){
											ok++;
										}
									}
									// daca il gaseste atunci el este deja logat
									if(ok != 0){
										memset(buffer, 0, BUFLEN);
										memcpy(buffer, "ATM> -2 : Sesiune deja deschisa", 31);
										send(i, buffer, strlen(buffer), 0);
									} else {
										// altfel verifica daca are cardul blocat
										for(w = 0; w < dim; w++) {
											if(vector[w].nrCard == nrCard) {
												if(vector[w].blocked == 2) {
													memset(buffer, 0, BUFLEN);
													memcpy(buffer, "ATM> -5 : Card blocat", 21);
													send(i, buffer, strlen(buffer), 0);
												} else { 
													// in caz contrat, logarea este permisa
													memset(buffer, 0, BUFLEN);
													memcpy(buffer, "ATM> Welcome ", 13);
													for(w = 0; w < dim; w++){
														if(nrCard == vector[w].nrCard){
															q = 0;
															while(helper[q].socket != 0){
																q++;
															}
															/* numarul de card si socketul sunt adaugate
															la sesiunea curenta */
															helper[q].socket = i;
															helper[q].nrCard = nrCard;
															strcat(buffer, vector[w].nume);
															strcat(buffer, " ");
															strcat(buffer, vector[w].prenume);
														}
													}
												// trimitere mesaj catre client
												send(i, buffer, strlen(buffer), 0); 
													}
											}
										}
									}
								}
							}
						}
						else if(strncmp(buffer, "logout", 6) == 0) {
							// sterge clientul din sesiunea curenta la comanda logout
							for(w = 0; w < 30; w++){
								if(helper[w].socket == i){
									helper[w].nrCard = 0;
									helper[w].socket = 0;
									memset(buffer, 0, BUFLEN);
									memcpy(buffer, "ATM> Deconectare de la bancomat", 31);
									send(i, buffer, strlen(buffer), 0);
								} 
							}
						}
						// afisare sold
						else if(strncmp(buffer, "listsold", 8) == 0){
							w = 0;
							q = 0;
							while(helper[w].socket != i && w < 30){
								w++;
							}
							int noCard = helper[w].nrCard;
							while(vector[q].nrCard != noCard && q < dim){
								q++;
							}
							memset(buffer, 0, BUFLEN);
							char sum[20];
							sprintf(sum, "%.02lf", vector[q].sold);
							memcpy(buffer, sum, strlen(sum));
							send(i, buffer, strlen(buffer), 0);
						}
						else if(strncmp(buffer, "getmoney", 8) == 0){
							int suma;
							char sum[10];
							memcpy(sum, &buffer[9], strlen(buffer) - 9);
							suma = atoi(sum);
							char final[10];
							snprintf(final, strlen(sum), "%d", suma);
							
							w = 0;
							q = 0;
							while(helper[w].socket != i && w < 30){
								w++;
							}
							// daca suma nu este multiplu de 10 intoarce eroare
							if(suma % 10 != 0){
								memset(buffer, 0, BUFLEN);
								memcpy(buffer, "ATM> -9 : Suma nu este multiplu de 10", 37);
								send(i, buffer, strlen(buffer), 0);
							} else {
								int noCard = helper[w].nrCard;
								while(vector[q].nrCard != noCard && q < dim){
									q++;
								}
								// verificare suma dorita cu cea existenta
								if(suma <= vector[q].sold){
									vector[q].sold -= suma;
									memset(buffer, 0, BUFLEN);
									memcpy(buffer, "ATM> Suma ", 10);
									strncat(buffer, final, strlen(final));
									strcat(buffer, " retrasa cu succes");										
									send(i, buffer, strlen(buffer), 0);
								} else {
									// daca suma este mai mica decat soldul clientului intoarce eroare
									memset(buffer, 0, BUFLEN);
									memcpy(buffer, "ATM> -8 : Fonduri insuficiente", 30);
									send(i, buffer, strlen(buffer), 0);
								}
							}
						}
						// depunere numerar
						else if(strncmp(buffer, "putmoney", 8) == 0){
							double suma;
							char com[9];
							sscanf(buffer, "%s %lf", com, &suma);

							w = 0;
							q = 0;
							while(helper[w].socket != i && w < 30){
								w++;
							}
							int noCard = helper[w].nrCard;
							while(vector[q].nrCard != noCard && q < dim){
								q++;
							}
							vector[q].sold += suma; 
							printf("%lf\n", vector[q].sold);
							memset(buffer, 0, BUFLEN);
							memcpy(buffer, "ATM> Suma depusa cu succes", 26);
							send(i, buffer, strlen(buffer), 0);
						}
						// inchidere client
						else if(strncmp(buffer, "quit", 4) == 0){
							FD_CLR(i, &read_fds);
							close(i);
						}
				 	}
				}
			}
		}
     }
     close(sockfd);
     return 0;
}
