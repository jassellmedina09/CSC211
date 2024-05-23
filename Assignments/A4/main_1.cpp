#include <iostream>
#include <set>

using namespace std;

void initialSud(int sudoku[9][9]) {
    int num;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> num;
            sudoku[i][j] = num;
        }
    }
}

bool range(int sudoku[9][9]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if ((sudoku[i][j] < 1) || (sudoku[i][j] > 9)) {
                return false;
            }
        }
    }
    return true;
}

bool sudokuChecker(int sudoku[9][9]) {
    if (!range(sudoku)) {
        return false;
    }
    
    for (int i = 0; i < 9; i++) {
        set<int> row;
        set<int> column;
        for (int j = 0; j < 9; j++) {
            row.insert(sudoku[i][j]);
            column.insert(sudoku[j][i]);
        }
        if ((row.size() != 9) || (column.size() != 9)) {
            return false;
        }
    }

    for (int rowIndex = 0; rowIndex < 3; rowIndex++) {
        for (int columnIndex = 0; columnIndex < 3; columnIndex++) {
            set<int> block;
            for (int blockRowIndex = 0; blockRowIndex < 3; blockRowIndex++) {
                for (int blockColumnIndex = 0; blockColumnIndex < 3; blockColumnIndex++) {
                    block.insert(sudoku[blockRowIndex + rowIndex * 3][blockColumnIndex + columnIndex * 3]);
                }
            }
            if (block.size() != 9) {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int board[9][9];
    initialSud(board);
    bool correct = sudokuChecker(board);
    if (correct) {
        cout << "Solution is good!\n";
    }
    else {
        cout << "Wrong solution!\n";
    }
    return 0;
}
