class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows[9][9] = {0};
        int cols[9][9] = {0};
        int board_indx[9][9] = {0};

        for(int r = 0;r<9;r++)
        {
            for(int c = 0;c<9;c++)
            {
                if(board[r][c] == '.')
                    continue;

                int val = board[r][c] - '1';
                int inx = (r/3)*3 + c/3;

                if(rows[r][val] || cols[c][val] || board_indx[inx][val])
                    return false;
                
                rows[r][val] = 1;
                cols[c][val] = 1;
                board_indx[inx][val] = 1;
            }
        }

        return true;
    }
};
