# Snake-Game
# Snake Game

A simple console-based Snake Game written in C++. The player controls the snake to collect fruits while avoiding collisions with the walls.

---

## Features
- Console-based interface
- Dynamic snake movement
- Randomly generated fruits
- Scoring system

---

## How to Play
1. Use the following keys to control the snake:
   - `W`: Move up
   - `A`: Move left
   - `S`: Move down
   - `D`: Move right
   - `X`: Exit the game
2. The objective is to collect the `F` (fruit) by moving the snake's head (`O`) over it.
3. Each fruit increases your score by 10 points.
4. The game ends if the snake hits the wall or the player chooses to quit.

---

## Prerequisites
To run the game, you need:
- A C++ compiler (e.g., g++, MinGW)
- Windows OS (due to the use of `conio.h` and `windows.h`)

---

## How to Run
1. Clone this repository or copy the code into a `.cpp` file.
2. Compile the code using a C++ compiler. For example:
   ```bash
   g++ snake_game.cpp -o snake_game
