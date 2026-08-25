class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Check rows
        for (int i = 0; i < 9; i++) {
            int count[9] = {0};
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    int idx = board[i][j] - '1';
                    if (count[idx]++) return false;
                }
            }
        }

        // Check columns
        for (int j = 0; j < 9; j++) {
            int count[9] = {0};
            for (int i = 0; i < 9; i++) {
                if (board[i][j] != '.') {
                    int idx = board[i][j] - '1';
                    if (count[idx]++) return false;
                }
            }
        }

        // Check 3x3 boxes
        for (int boxRow = 0; boxRow < 3; boxRow++) {
            for (int boxCol = 0; boxCol < 3; boxCol++) {
                int count[9] = {0};
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        int r = boxRow * 3 + i;
                        int c = boxCol * 3 + j;
                        if (board[r][c] != '.') {
                            int idx = board[r][c] - '1';
                            if (count[idx]++) return false;
                        }
                    }
                }
            }
        }

        return true;
    }
};
