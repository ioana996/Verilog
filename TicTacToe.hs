{-# LANGUAGE MultiParamTypeClasses, TypeSynonymInstances, TupleSections #-}

module TicTacToe where

import MCTS
import GameState
import Data.Maybe

import System.Random

{-
    Tipul celulelor (1-9)
-}
type Cell = Int

{-
    Tipul jucătorilor
-}
data Player = X | O
    deriving (Eq, Enum, Show)

{-
    Întoarce celălalt jucător.
-}
otherPlayer :: Player -> Player
otherPlayer X = O
otherPlayer O = X

{-
    *** TODO ***

    Tipul stării jocului. Ar trebui să conțină informații despre tablă
    și despre jucătorul care urmează să mute.
-}
data Board = Board { board :: [(Cell, Maybe Player)]
			, player :: Player
			} deriving Eq

{-
    *** TODO ***

    Întoarce lista conținuturilor celulelor, unde celule libere
    sunt reprezentate de `Nothing`.

    Ordinea celulelor este următoarea:

    789
    456
    123
-}
boardConfiguration :: Board -> [Maybe Player]
boardConfiguration (Board board player) = map snd board

{-
    *** TODO ***

    Întoarce jucătorul care urmează să mute.
-}
boardPlayer :: Board -> Player
boardPlayer (Board board player) = player

{-
    *** TODO ***

    Instanțiați clasa `Show` cu tipul `Board`.
-}
instance Show Board where
    show (Board board player) = (showCell (board !! 6)) ++ " " ++ (showCell (board !! 7)) ++ " " ++ (showCell (board !! 8)) ++ "\n" ++
								(showCell (board !! 3)) ++ " " ++ (showCell (board !! 4)) ++ " " ++ (showCell (board !! 5)) ++ "\n" ++
								(showCell (board !! 0)) ++ " " ++ (showCell (board !! 1)) ++ " " ++ (showCell (board !! 2)) ++ "\n"
	
showCell :: (Cell, Maybe Player) -> [Char]
showCell pair = if (snd pair) == (Just X) then "X"
				else if (snd pair) == (Just O) then "O"
					else "_"

{-
    *** TODO ***

    Instanțiați clasa `GameBoard` cu tipurile `Board` și `Cell`.
-}
instance GameState Board Cell where
    -- playerIndex :: Board -> Int
    playerIndex board = if (boardPlayer board) == X then 1
							else 2

    -- maxPlayers :: Board -> Int
    maxPlayers board = 2

    --successors :: Board -> [(Cell, Board)]
    successors actualBoard@(Board board player) = [(cell, (fromJust $ place cell actualBoard)) | cell <- [1..9], snd(board !! (cell-1)) == Nothing] 

    -- outcome :: Board -> Outcome
    outcome (Board board player) = if (((snd (board !! 0)) == (Just X) && (snd (board !! 1)) == (Just X) && (snd (board !! 2)) == (Just X)) || 
									((snd (board !! 3)) == (Just X) && (snd (board !! 4)) == (Just X) && (snd (board !! 5)) == (Just X)) ||
									((snd (board !! 6)) == (Just X) && (snd (board !! 7)) == (Just X) && (snd (board !! 8)) == (Just X)) ||
									((snd (board !! 0)) == (Just X) && (snd (board !! 3)) == (Just X) && (snd (board !! 6)) == (Just X)) || 
									((snd (board !! 1)) == (Just X) && (snd (board !! 4)) == (Just X) && (snd (board !! 7)) == (Just X)) ||
									((snd (board !! 2)) == (Just X) && (snd (board !! 5)) == (Just X) && (snd (board !! 8)) == (Just X)) ||
									((snd (board !! 0)) == (Just X) && (snd (board !! 4)) == (Just X) && (snd (board !! 8)) == (Just X)) ||
									((snd (board !! 2)) == (Just X) && (snd (board !! 4)) == (Just X) && (snd (board !! 6)) == (Just X)) ||
									
									((snd (board !! 0)) == (Just O) && (snd (board !! 1)) == (Just O) && (snd (board !! 2)) == (Just O)) || 
									((snd (board !! 3)) == (Just O) && (snd (board !! 4)) == (Just O) && (snd (board !! 5)) == (Just O)) ||
									((snd (board !! 6)) == (Just O) && (snd (board !! 7)) == (Just O) && (snd (board !! 8)) == (Just O)) ||
									((snd (board !! 0)) == (Just O) && (snd (board !! 3)) == (Just O) && (snd (board !! 6)) == (Just O)) || 
									((snd (board !! 1)) == (Just O) && (snd (board !! 4)) == (Just O) && (snd (board !! 7)) == (Just O)) ||
									((snd (board !! 2)) == (Just O) && (snd (board !! 5)) == (Just O) && (snd (board !! 8)) == (Just O)) ||
									((snd (board !! 0)) == (Just O) && (snd (board !! 4)) == (Just O) && (snd (board !! 8)) == (Just O)) ||
									((snd (board !! 2)) == (Just O) && (snd (board !! 4)) == (Just O) && (snd (board !! 6)) == (Just O))) then (Win 1.0)
									else if (foldl (\ contor elem -> if (snd elem) == Nothing then (contor + 1) else contor) 0 board) /= 0 then Ongoing
											else (Draw 1.0)

{-
    *** TODO ***

    Tabla inițială de joc. X mută primul.
-}
initialBoard :: Board
initialBoard  = (Board [(1, Nothing), (2, Nothing), (3, Nothing),
						(4, Nothing), (5, Nothing), (6, Nothing),
						(7, Nothing), (8, Nothing), (9, Nothing)] X)

{-
    *** TODO ***

    Mută în celula dată ca parametru, în funcție de jucătorul aflat la rând,
    și schimbă jucătorul curent.

    Ordinea celulelor este explicată la funcția `boardConfiguration`.
-}
place :: Cell -> Board -> Maybe Board
place c b@(Board board player) = if (c < 1 || c > 9) then Nothing
									else if ((snd (board !! (c - 1))) == Nothing) then
										(Just (Board (foldl (\ lista pair -> if((fst pair) /= c) then lista ++ [pair]
											else lista ++ [(c, (Just player))]) [] board) (otherPlayer player))) else Nothing

{-
    *** TODO ***

    Alege o mutare pornind din starea curentă.

    Utilizați `choose` din modulul `MCTS`, cu un număr dorit de iterații
    ale algoritmului.

    Pentru a juca contra calculatorului, rulați din modulul `Interactive`:

    > humanVsAI step
-}
step :: Board -> StdGen -> (Cell, Board)
step = undefined
