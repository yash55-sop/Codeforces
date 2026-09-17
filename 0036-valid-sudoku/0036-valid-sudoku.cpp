class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       
        bool rows[9][9] = {};
        bool columns[9][9] = {};
        bool boxes[9][9] = {};

        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {

               
                if (board[row][col] == '.') {
                    continue;
                }

               
                int number = board[row][col] - '1';

               
                int boxIndex = (row / 3) * 3 + (col / 3);

                
                if (rows[row][number] ||
                    columns[col][number] ||
                    boxes[boxIndex][number]) {
                    return false;
                }

              
                rows[row][number] = true;
                columns[col][number] = true;
                boxes[boxIndex][number] = true;
            }
        }

        return true;
    }
};