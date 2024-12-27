#include <iostream>
#include <vector>

using namespace std;

// Function to print a Sudoku grid
void printGrid(vector<vector<int>> &grid) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to check if a number is safe to place at a given cell
bool isSafe(vector<vector<int>> &grid, int row, int col, int num) {
    // Check if 'num' is not already present in the current row
    for (int x = 0; x < 9; x++) {
        if (grid[row][x] == num) {
            return false;
        }
    }

    // Check if 'num' is not already present in the current column
    for (int x = 0; x < 9; x++) {
        if (grid[x][col] == num) {
            return false;
        }
    }

    // Check if 'num' is not already present in the 3x3 subgrid
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i + startRow][j + startCol] == num) {
                return false;
            }
        }
    }

    return true;
}

// Function to solve the Sudoku puzzle using backtracking
bool solveSudoku(vector<vector<int>> &grid) {
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            // Find an empty cell
            if (grid[row][col] == 0) {
                // Try placing numbers from 1 to 9
                for (int num = 1; num <= 9; num++) {
                    // Check if placing 'num' is safe
                    if (isSafe(grid, row, col, num)) {
                        // Place the number
                        grid[row][col] = num;

                        // Recursively solve the rest of the puzzle
                        if (solveSudoku(grid)) {
                            return true;
                        } else {
                            // If placing 'num' didn't lead to a solution, backtrack
                            grid[row][col] = 0;
                        }
                    }
                }
                // No number from 1 to 9 can be placed safely
                return false;
            }
        }
    }
    // All cells are filled, puzzle is solved
    return true;
}

int main() {
    // Example Sudoku grid (replace with user input)
    vector<vector<int>> grid = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    cout << "Original Sudoku:" << endl;
    printGrid(grid);

    if (solveSudoku(grid)) {
        cout << "\nSolved Sudoku:" << endl;
        printGrid(grid);
    } else {
        cout << "\nNo solution exists." << endl;
    }

    return 0;
}