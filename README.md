# CodeAlpha_Sudoku-Solver
# Sudoku Solver 🔢

## Description 🌟🌟
The Sudoku Solver is a C++ program that solves 9x9 Sudoku puzzles using the backtracking algorithm. The program takes an initial Sudoku grid as input, fills in the missing values, and prints the solved puzzle. It ensures all Sudoku rules are adhered to:
- Each row must contain numbers 1 through 9 without repetition.
- Each column must contain numbers 1 through 9 without repetition.
- Each 3x3 subgrid must contain numbers 1 through 9 without repetition.

---

## Features⌁⌁
- Solves standard 9x9 Sudoku puzzles.
- Uses a recursive backtracking algorithm.
- Verifies puzzle validity and reports if no solution exists.
- Outputs both the original and solved Sudoku grids.

---

## How It Works ⚡⚡
1. The program starts by printing the provided puzzle grid.
2. It recursively attempts to place numbers (1–9) in empty cells.
3. Each number is validated for safety based on Sudoku rules.
4. If a valid placement is found, it proceeds; otherwise, it backtracks.
5. Once the puzzle is solved, the completed grid is displayed.

---

## Example Input and Output
### Input (Example Sudoku Puzzle):
    5 3 0 0 7 0 0 0 0 6 0 0 1 9 5 0 0 0 0 9 8 0 0 0 0 6 0 8 0 0 0 6 0 0 0 3 4 0 0 8 0 3 0 0 1 7 0 0 0 2 0 0 0 6 0 6 0 0 0 0 
    2 8 0 0 0 0 4 1 9 0 0 5 0 0 0 0 8 0 0 7 9


### Output (Solved Sudoku Puzzle):
    5 3 4 6 7 8 9 1 2 6 7 2 1 9 5 3 4 8 1 9 8 3 4 2 5 6 7 8 5 9 7 6 1 4 2 3 4 2 6 8 5 3 7 9 1 7 1 3 9 2 4 8 5 6 9 6 1 5 3 7 
    2 8 4 2 8 7 4 1 9 6 3 5 3 4 5 2 8 6 1 7 9


---

## How to Compile and Run
1. Save the code to a file, e.g., `Sudoku_Solver.cpp`.
2. Compile the program using a C++ compiler:
   ```bash
   g++ Sudoku_Solver.cpp -o Sudoku_Solver


3. Run the program:
   ./Sudoku_Solver


# Limitations
  Only supports 9x9 Sudoku puzzles.
  Assumes the input puzzle is valid.
  Cannot solve puzzles with multiple solutions or invalid grids.


# Author 💮💮
Bhavita Bhanani
Feel free to reach out for queries or suggestions:
Email: bhavitabhanani22@gmail.com


# License
This project is open-source and available under the MIT License.


