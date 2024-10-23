
# Sudoku Solver

This is a C-based **Sudoku Solver** that uses backtracking to solve 9x9 Sudoku puzzles. The program reads the puzzle from a CSV file (`sudoku.txt`) and attempts to solve it efficiently. Once solved, the program prints the solution along with the time it took to solve the puzzle.

## Features
- **Backtracking Algorithm:** Efficiently solves Sudoku puzzles by trying all possible combinations while following Sudoku's rules.
- **CSV File Input:** Reads the Sudoku puzzle from a CSV file (`sudoku.txt`), where `0` represents empty cells.
- **Execution Time Measurement:** Displays the time taken to solve the puzzle in milliseconds.

## Requirements

- GCC compiler
- A valid `sudoku.txt` file in CSV format, with each row having 9 values separated by commas. Empty cells should be represented by `0`.

## Compilation and Execution

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/sudoku-solver.git
   cd sudoku-solver
   ```

2. Compile the code:
   ```bash
   gcc -o sudoku_solver sudoku_solver.c -Wall
   ```

3. Create your Sudoku puzzle file (`sudoku.txt`) in CSV format, where `0` represents empty cells. For example:
   ```text
   8,0,0,0,0,0,0,0,0
   0,3,0,0,0,6,0,0,0
   7,0,0,5,0,0,9,0,2
   5,0,0,0,0,0,7,0,0
   0,0,0,4,5,7,0,0,0
   0,0,1,0,0,0,0,3,0
   0,1,0,0,0,0,6,8,1
   0,8,5,0,0,0,0,0,4
   9,0,0,0,0,4,0,0,0
   ```

4. Run the solver:
   ```bash
   ./sudoku_solver
   ```

The program will read the `sudoku.txt` file, solve the puzzle, and print the solved puzzle along with the time it took to solve.
