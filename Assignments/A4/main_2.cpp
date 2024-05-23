#include <iostream>
#include <vector>

using namespace std;

int liveCount(vector<vector<char>>& board, int x, int y, int n, int m) {
    int count = 0;
    vector<pair<int, int>> directions = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
    
    for (auto dir : directions) {
        int newX = x + dir.first;
        int newY = y + dir.second;
        
        if (newX >= 0 && newX < n && newY >= 0 && newY < m && board[newX][newY] == '*') {
            count++;
        }
    }
    
    return count;
}

void gameOfLife(vector<vector<char>>& board, int n, int m, int g) {
    while (g--) {
        vector<vector<char>> nextGen = board; 
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int live = liveCount(board, i, j, n, m);
                
                if (board[i][j] == '*' && (live < 2 || live > 3)) {
                    nextGen[i][j] = '.';
                } else if (board[i][j] == '.' && live == 3) {
                    nextGen[i][j] = '*';
                }
            }
        }
        
        board = nextGen; 
    }
    
    for (auto row : board) {
        for (size_t i = 0; i < row.size(); ++i) {
            cout << row[i];
            if (i != row.size() - 1) {
                cout << " "; 
            }
        }
        cout << endl;
    }
}

int main() {
    int n, m, g;
    cin >> n >> m >> g;
    
    vector<vector<char>> board(n, vector<char>(m));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
        }
    }
    
    gameOfLife(board, n, m, g);
    
    return 0;
}
