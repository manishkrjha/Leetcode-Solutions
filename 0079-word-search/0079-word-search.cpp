class Solution {
public:
    bool solve(vector<vector<char>> &board, int idx, int i, int j, string word){
        if(idx == word.size()){
            return true;
        }
        
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j] != word[idx]){
            return false;
        }
        
        char tmp = board[i][j];
        board[i][j] = '*';
        
        bool left = solve(board, idx+1, i, j-1, word);
        bool top = solve(board, idx+1, i-1, j, word);
        bool right = solve(board, idx+1, i, j+1, word);
        bool down = solve(board, idx+1, i+1, j, word);
        
        board[i][j] = tmp;
        return (left||right||top||down);
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j] == word[0]){
                    if(solve(board, 0, i, j, word)){
                        return true;
                    }
                }
            }
        }
        
        return false;
    }
};