class Solution {
public:
    bool validbox(vector<vector<char>>& board, int sr, int er, int sc, int ec){
        unordered_set<char> s;
        for(int row = sr; row<er; row++){
            for(int col = sc; col<ec; col++){
                if(board[row][col] == '.') continue;
                if(s.find(board[row][col]) != s.end()) return false;
                s.insert(board[row][col]);
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows = board.size();
        int cols = board[0].size();

        for(int row = 0; row < rows; row++){
            unordered_set<char> s;
            for(int col = 0; col < cols; col++){
                if(board[row][col] == '.') continue;
                if(s.find(board[row][col]) != s.end()) return false;
                s.insert(board[row][col]);
            }
        }

        for(int col = 0; col < cols; col++){
            unordered_set<char> s;
            for(int row = 0; row < rows; row++){
                if(board[row][col] == '.') continue;
                if(s.find(board[row][col]) != s.end()) return false;
                s.insert(board[row][col]);
            }
        }

        for(int sr = 0; sr < 9; sr += 3){
            int er = sr + 3;
            for(int sc = 0; sc < 9; sc += 3){
                int ec = sc + 3;
                if(!validbox(board, sr, er, sc, ec)) return false;
            }
        }
        return true;
    }
};
