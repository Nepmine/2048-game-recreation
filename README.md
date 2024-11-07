2048 Game
A simple, console-based version of the popular 2048 puzzle game implemented in C. Use W, A, S, and D keys to combine matching tiles on a 4x4 grid until you reach the 2048 tile. The game includes a scoring system with bonus points for merging higher-value tiles!

Table of Contents
Game Description
Features
How to Play
Installation and Usage
Screenshots
License
Game Description
In 2048, players move numbered tiles in four possible directions (up, down, left, right) to combine matching tiles. Each move introduces a new tile (either 2 or 4) randomly on the grid. The goal is to combine tiles with the same numbers to form higher-numbered tiles until you reach the tile with the number 2048. The game ends when no moves are possible.

Features
4x4 Grid: Simple grid layout for easy gameplay.
Score System: Tracks score and gives bonus points for high-value merges.
Real-time Controls: Immediate response to W, A, S, and D keys without pressing Enter.
Randomized Tile Generation: Randomly places a new tile after each move.
Game Over Detection: Ends the game when no moves are possible.
How to Play
Controls:
Use the following keys to move the tiles:
W - Move Up
A - Move Left
S - Move Down
D - Move Right
Objective: Combine tiles to reach the 2048 tile.
Scoring: Earn points by combining tiles, with bonus points for merging higher values.
Installation and Usage
Clone this repository:

bash
Copy code
git clone https://github.com/your-username/2048-Game.git
cd 2048-Game
Compile the program:

For GCC:
bash
Copy code
gcc 2048.c -o 2048
For Windows with MinGW:
bash
Copy code
gcc 2048.c -o 2048.exe
Run the game:

On Linux or macOS:
bash
Copy code
./2048
On Windows:
cmd
Copy code
2048.exe
Screenshots
<!-- Include any screenshots you have, e.g., sample game grid or gameplay screenshots -->
License
This project is licensed under the MIT License - see the LICENSE file for details.
