#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h> 
#include <sys/time.h>
#include <sys/select.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUFLEN 256

void error(char *msg)
{
    perror(msg);
    exit(0);
}

int main(int argc, char *argv[])
{
    int sfd;
    struct sockaddr_in to_station;
    int addr_len, nbytes;

    int sockfd, n;
    struct sockaddr_in serv_addr;
    struct hostent *server;
    int logat = 0;

	fd_set read_fds;    
    fd_set tmp_fds; 
    int fdmax;      

    FD_ZERO(&read_fds);
    FD_ZERO(&tmp_fds);

    char buffer[BUFLEN];
    if (argc < 3) {
       fprintf(stderr,"Usage %s server_address server_port\n", argv[0]);
       exit(0);
    }  

    /*Deschidere socket*/
    if ((sfd = socket(AF_INET, SOCK_DGRAM, 0)) == -1) {
        perror("socket");
        exit(1);
    }

    /*Setare struct sockaddr_in pentru a specifica unde trimit datele*/
    to_station.sin_family = AF_INET;
    to_station.sin_port = htons(atoi(argv[2]));
    to_station.sin_addr.s_addr = inet_addr("127.0.0.1");
    memset(to_station.sin_zero, '\0', sizeof(to_station.sin_zero)); 
    
	sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) 
        error("ERROR opening socket");
    
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(atoi(argv[2]));
    inet_aton(argv[1], &serv_addr.sin_addr);
    
    
    if (connect(sockfd,(struct sockaddr*) &serv_addr,sizeof(serv_addr)) < 0) 
        error("ERROR connecting");  

    FD_SET(0, &read_fds);
    FD_SET(sfd, &read_fds);
    FD_SET(sockfd, &read_fds);
    fdmax = sockfd;  

    int nrC;
    int pin;
    char sir[6];

    // creare fisier pentru pid-ul respectiv
    char file[50];
    int id = getpid();
    sprintf(file, "client-%1d.log", id);
    int fout = open(file, O_CREAT|O_WRONLY, 0777);
    while(1){

  		tmp_fds = read_fds;
   		if (select(fdmax + 1, &tmp_fds, NULL, NULL, NULL) == -1)
            error("ERROR in select");
  		//citesc de la tastatura
			if (FD_ISSET(0, &tmp_fds)){
				//memset inainte de orce scriere citire din buffer!
    		    memset(buffer, 0 , BUFLEN);
    		    fgets(buffer, BUFLEN-1, stdin);
                // scriere comanda in fisier
                write(fout, buffer, strlen(buffer));

                if(strncmp(buffer, "unlock", 6) == 0){
                    memset(buffer, 0 , BUFLEN);
                    sprintf(buffer, "unlock %d", nrC);
                    sendto(sfd, buffer, strlen(buffer), 0, (struct sockaddr *)&to_station, sizeof(struct sockaddr));
                }

    			// verifica daca respectivul client este logat
                if(strncmp(buffer, "login", 5) == 0){
                    sscanf(buffer, "%s %d %d", sir, &nrC, &pin);
                    printf("%d\n",nrC);
                    if(logat == 0)
                        n = send(sockfd,buffer,strlen(buffer), 0);
                    else {
                        memset(buffer, 0, BUFLEN);
                        memcpy(buffer, "-2 : Sesiune deja deschisa", 31);
                        write(fout, buffer, strlen(buffer));
                        write(fout, "\n", 1);
                    }
                }
                // verifica daca respectivul client este logat
                if(strncmp(buffer, "logout", 6) == 0){
                    if(logat == 1)
                        n = send(sockfd,buffer,strlen(buffer), 0);
                    else {
                        memset(buffer, 0, BUFLEN);
                        memcpy(buffer, "-1 : Clientul nu este autentificat", 34);
                        write(fout, buffer, strlen(buffer));
                        write(fout, "\n", 1);
                    }
                }
                // verifica daca respectivul client este logat
                if(strncmp(buffer, "getmoney", 8) == 0){
                    if(logat == 1)
                        n = send(sockfd,buffer,strlen(buffer), 0);
                    else {
                        memset(buffer, 0, BUFLEN);
                        memcpy(buffer, "-1 : Clientul nu este autentificat", 34);
                        write(fout, buffer, strlen(buffer));
                        write(fout, "\n", 1);
                    }
                }
                // verifica daca respectivul client este logat
                if(strncmp(buffer, "putmoney", 8) == 0){
                    if(logat == 1)
                        n = send(sockfd,buffer,strlen(buffer), 0);
                    else {
                        memset(buffer, 0, BUFLEN);
                        memcpy(buffer, "-1 : Clientul nu este autentificat", 34);
                        write(fout, buffer, strlen(buffer));
                        write(fout, "\n", 1);
                    }
                }
                // verifica daca respectivul client este logat
                if(strncmp(buffer, "listsold", 8) == 0){
                    if(logat == 1)
                        n = send(sockfd,buffer,strlen(buffer), 0);
                    else {
                        memset(buffer, 0, BUFLEN);
                        memcpy(buffer, "-1 : Clientul nu este autentificat", 34);
                        write(fout, buffer, strlen(buffer));
                        write(fout, "\n", 1);
                    }
                }

                // la comanda "quit" primita de la terminalul clientului, acesta se inchide
                if(strncmp(buffer, "quit", 4) == 0)
                    exit(0);

    		    if (n < 0) 
        	       error("-10 : ERROR writing to socket");
			} 
            if (FD_ISSET(sockfd, &tmp_fds)) {

			    //if (FD_ISSET(sockfd, &tmp_fds)) {
				memset(buffer, 0, BUFLEN);		
				n = recv(sockfd, buffer, sizeof(buffer), 0);
                if (n < 0)
        	       error("-10 : ERROR writing to socket");

                // la comanda "quit" spsita de la server se inchide clientul
                if(strncmp(buffer, "quit", 4) == 0){
                    write(fout, buffer, strlen(buffer));
                    close(sockfd);
                    exit(0);
                }

                // daca un client este logat cu succes se seteaza o variabila cu valoarea 1
                if(strncmp(buffer, "ATM> Welcome ", 13) == 0)
                    logat = 1;
                // daca un client s-a deconectat se reseteaza variabila la valoarea 0
                if(strncmp(buffer, "ATM> Deconectare de la bancomat", 31) == 0)
                    logat = 0;

                // scriere rezultate in fisier
                write(fout, buffer, strlen(buffer));
                write(fout, "\n", 1);
			}

            if (FD_ISSET(sfd, &tmp_fds)) {

                memset(buffer, 0, BUFLEN);  
                nbytes = recvfrom(sfd, buffer,BUFLEN,0,(struct sockaddr *)&to_station,&addr_len);
                buffer[nbytes] = '\0';

                if(strncmp(buffer, "UNLOCK> -4 : Numar card inexistent", 34) == 0){
                    write(fout, buffer, strlen(buffer));
                    write(fout, "\n", 1);
                }

                if(strncmp(buffer, "UNLOCK> Trimite parola secreta", 30) == 0){
                    write(fout, buffer, strlen(buffer));
                    write(fout, "\n", 1);
                    char parola[7];
                    fgets(parola, 7, stdin);
                    sprintf(buffer, "%d %s", nrC, parola);
                    write(fout, parola, strlen(parola));
                    write(fout, "\n", 1);
                    sendto(sfd, buffer, strlen(buffer), 0, (struct sockaddr *)&to_station, sizeof(struct sockaddr));
                }

                 if(strncmp(buffer, "UNLOCK> -7 : Deblocare esuata", 29) == 0){
                    write(fout, buffer, strlen(buffer));
                    write(fout, "\n", 1);
                }

                if(strncmp(buffer, "UNLOCK> -7 : Client deblocat", 28) == 0){
                    write(fout, buffer, strlen(buffer));
                    write(fout, "\n", 1);
                }

            }
    }
    return 0;
}
