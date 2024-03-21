# CHECKERS

For the correct operation of the program it is necessary:

--> Windows: unpack the SFML-2.5.1 library

--> MacOS: download the SFML library using the command:
"brew install sfml"

![obraz](https://github.com/przemek890/Checkers/assets/116519159/361a6521-a420-453f-9527-4d1cfd887fda)

---

![Simple Checkers](doc/checkers.gif)

---

## CHECKERS RULES - BASED ON GERMAN STYLE

### GENERAL :
> first player to move: player with lighter pieces

> board size: 8x8

> piece reaching the end of the board becomes a queen

> winner: player who eliminates all of the opponent's pieces or puts the opponent in a position where they have no legal moves

> time limit: player who exceeds their time limit loses

> draw: 15 moves without a capture by either player

---

### MOVEMENT RULES:
> players can only move on dark squares

> pieces can only move forward one square (exception: captures)

> queens can move any number of squares diagonally, forward or backward (unless blocked by other pieces)

---

### CAPTURES:
> captures are mandatory

> captures by queens take priority

> if multiple captures have the same priority, player can choose which to make

> pieces can only capture forward, if the square beyond the opponent's piece is empty (the piece lands on that square after the capture). it can then make another capture if possible

> queens can capture diagonally, if the square beyond the opponent's piece is empty (the queen lands on that square after the capture). it can then make another capture if possible on any diagonal

---


### Scope of responsibility:
-  Attributes and gameplay shown in the video above

- See more: [Documentation](doc/Documentation.pdf) (only in Polish)


