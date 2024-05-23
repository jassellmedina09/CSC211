#include <iostream>
#include <vector>
#include <string>
#include <sstream>

const int PUZZLE_SIZE = 3;

bool moveUp(std::vector<std::vector<int>>& state, int row, int col);
bool moveDown(std::vector<std::vector<int>>& state, int row, int col);
bool moveLeft(std::vector<std::vector<int>>& state, int row, int col);
bool moveRight(std::vector<std::vector<int>>& state, int row, int col);
std::pair<int, int> findZero(const std::vector<std::vector<int>>& state);
bool isEqual(const std::vector<std::vector<int>>& state1, const std::vector<std::vector<int>>& state2);

int main() {
    std::vector<std::vector<int>> state(PUZZLE_SIZE, std::vector<int>(PUZZLE_SIZE));
    std::vector<std::vector<int>> goalState = {{1, 2, 3}, {4, 5, 6}, {7, 8, 0}};
    std::string inputLine;

    std::cout;
    std::getline(std::cin, inputLine);
    std::istringstream stateStream(inputLine);

    for (int i = 0; i < PUZZLE_SIZE; ++i) {
        for (int j = 0; j < PUZZLE_SIZE; ++j) {
            stateStream >> state[i][j];
        }
    }

    std::cout;
    std::getline(std::cin, inputLine);
    std::istringstream commandStream(inputLine);

    char command;
    while (commandStream >> command) {
        std::pair<int, int> zeroPos = findZero(state);
        switch (command) {
            case 'U': moveUp(state, zeroPos.first, zeroPos.second); break;
            case 'D': moveDown(state, zeroPos.first, zeroPos.second); break;
            case 'L': moveLeft(state, zeroPos.first, zeroPos.second); break;
            case 'R': moveRight(state, zeroPos.first, zeroPos.second); break;
            default: std::cerr << "Invalid" << command << std::endl; return 1;
        }
    }

    if (isEqual(state, goalState)) {
        std::cout << "Solution is good!" << std::endl;
    } else {
        std::cout << "Wrong solution!" << std::endl;
    }

    return 0;
}

bool moveUp(std::vector<std::vector<int>>& state, int row, int col) {
    if (row > 0) { 
        std::swap(state[row][col], state[row - 1][col]);
        return true;
    }
    return false;
}

bool moveDown(std::vector<std::vector<int>>& state, int row, int col) {
    if (row < PUZZLE_SIZE - 1) { 
        std::swap(state[row][col], state[row + 1][col]);
        return true;
    }
    return false;
}

bool moveLeft(std::vector<std::vector<int>>& state, int row, int col) {
    if (col > 0) {
        std::swap(state[row][col], state[row][col - 1]);
        return true;
    }
    return false;
}

bool moveRight(std::vector<std::vector<int>>& state, int row, int col) {
    if (col < PUZZLE_SIZE - 1) {
        std::swap(state[row][col], state[row][col + 1]);
        return true;
    }
    return false;
}

std::pair<int, int> findZero(const std::vector<std::vector<int>>& state) {
    for (int i = 0; i < PUZZLE_SIZE; ++i) {
        for (int j = 0; j < PUZZLE_SIZE; ++j) {
            if (state[i][j] == 0) {
                return std::make_pair(i, j);
            }
        }
    }
    return std::make_pair(-1, -1);
}

bool isEqual(const std::vector<std::vector<int>>& state1, const std::vector<std::vector<int>>& state2) {
    for (int i = 0; i < PUZZLE_SIZE; ++i) {
        for (int j = 0; j < PUZZLE_SIZE; ++j) {
            if (state1[i][j] != state2[i][j]) {
                return false;
            }
        }
    }
    return true;
}
