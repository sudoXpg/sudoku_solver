
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

## Future Updates

The following features are planned for future development to enhance the functionality and versatility of the Sudoku Solver:

### 1. Difficulty Levels
   - Implement a feature that calculates the **difficulty level** of the Sudoku puzzle based on the number of clues (filled cells) in the initial grid.
   - Difficulty levels will be categorized into:
     - **Easy**: More than 40 clues
     - **Medium**: Between 30 to 40 clues
     - **Hard**: Between 20 to 30 clues
     - **Expert**: Less than 20 clues
   - The solver will analyze the complexity of the puzzle-solving process to further adjust the difficulty level dynamically (based on factors like required backtracking and dead-ends encountered).

### 2. Puzzle Generator
   - Add a feature to **generate new Sudoku puzzles** of varying difficulty levels.
   - The puzzle generator will ensure that:
     - Each puzzle has a unique solution.
     - The number of clues can be adjusted to match the desired difficulty level (Easy, Medium, Hard, Expert).
     - The generated puzzles will adhere to Sudoku's rules, ensuring valid row, column, and box constraints.
   - The generator will be based on **randomization techniques** with backtracking to ensure that puzzles are properly solvable, maintaining difficulty balance.
