class Solution {
public:
    int rows, cols;
    int directions[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

    void dfs(vector<vector<char>>& board, int r, int c) {
        if(r < 0 || c < 0 || r >= rows || c >= cols || board[r][c] != 'O')
            return;

        board[r][c] = '#';   // mark safe

        for(int i = 0; i < 4; i++) {
            int nr = r + directions[i][0];
            int nc = c + directions[i][1];
            dfs(board, nr, nc);
        }
    }

    void solve(vector<vector<char>>& board) {
        if(board.empty()) return;

        rows = board.size();
        cols = board[0].size();

        // 1) Mark boundary-connected O's as safe
        for(int r = 0; r < rows; r++) {
            if(board[r][0] == 'O') dfs(board, r, 0);
            if(board[r][cols-1] == 'O') dfs(board, r, cols-1);
        }

        for(int c = 0; c < cols; c++) {
            if(board[0][c] == 'O') dfs(board, 0, c);
            if(board[rows-1][c] == 'O') dfs(board, rows-1, c);
        }

        // 2) Flip surrounded O -> X
        //    Convert safe # -> O
        for(int r = 0; r < rows; r++) {
            for(int c = 0; c < cols; c++) {
                if(board[r][c] == 'O')
                    board[r][c] = 'X';
                else if(board[r][c] == '#')
                    board[r][c] = 'O';
            }
        }
    }
};
