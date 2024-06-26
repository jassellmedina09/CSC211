#include "sudoku.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

// reads a file containing a sudoku puzzle represented as
// 9 rows, each consisting of 9 comma-separated values
Sudoku::Sudoku(const char *fname) {
    // create a file reader stream to read data from a file
    ifstream infile;

    // will store lines and numbers
    string line, number;

    // index to write value to in puzzle
    int i = 0;

    // open a stream to the given file
    infile.open(fname);

    // get a line of input from the file
    while(getline(infile, line)) {
        // store the line inside a stringstream
        stringstream parser(line);
        // use stringstream to split line along ','
        while(getline(parser, number, ',')) {
            // convert string to an integer, store it, and update iterator
            puzzle[i++] = stoi(number);
        }
    }
    // close the filestream once we are done wiht it
    infile.close();
}

// destruct Sudoku object
Sudoku::~Sudoku() {
    // since we never allocated any memory on the heap, we don't need
    // to define behavior for the deconstructor
}

// this is the funciton call which will be made by the autograder to test
// your implementation for problem 3. It takes no parameters and
// should overwrite the 0s in puzzle to so that it represents a solved puzzle
void Sudoku::solve() {
    // TODO:
    // implement solution to problem 3

    // This is where your private helper method which does the
    // backtracking should be called
    solveHelper(0, 0);

}
bool Sudoku::solveHelper(int row, int col) {
    if (!findEmptyCell(row, col)) {
        return true;
    }

    for (int num = 1; num <= 9; num++) {
        if (isValidPlacement(row, col, num)) {
            puzzle[row * 9 + col] = num;

            if (solveHelper(row, col + 1)) {
                return true;
            }

            puzzle[row * 9 + col] = 0;
        }
    }

    return false;
}

bool Sudoku::findEmptyCell(int& row, int& col) {
    for (row = 0; row < 9; row++) {
        for (col = 0; col < 9; col++) {
            if (puzzle[row * 9 + col] == 0) {
                return true;
            }
        }
    }
    return false;
}

bool Sudoku::isValidPlacement(int row, int col, int num) {
    for (int i = 0; i < 9; i++) {
        if (puzzle[row * 9 + i] == num || puzzle[i * 9 + col] == num) {
            return false;
        }
    }

    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (puzzle[(i + startRow) * 9 + j + startCol] == num) {
                return false;
            }
        }
    }

    return true;
}
// this function prints your puzzle in 2D format with commas
// separating your values
void Sudoku::print() {
    for(int i = 0; i < 9; i++) {
        std::cout << puzzle[i*9];
        int base = i*9;
        for(int offset = 1; offset < 9; offset++) {
            std::cout << ',' << puzzle[base + offset];
        }
        std::cout << std::endl;
    }
}
