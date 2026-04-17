class Solution {
public:
  bool dfs(int i, int j, int idx, vector<vector<char>>& board, string& word) {

    if (idx == word.size()) return true;
     int m = board.size();
     int n = board[0].size();

     if (i < 0 || j < 0 || i >= m || j >= n || board[i][j] != word[idx])
            return false;

  // mark visited
        char temp = board[i][j];
        board[i][j] = '#';

        // explore 4 directions
        bool found = dfs(i+1, j, idx+1, board, word) ||dfs(i-1, j, idx+1, board, word) ||dfs(i, j+1, idx+1, board, word) ||  dfs(i, j-1, idx+1, board, word);
     board[i][j] = temp;
    return found;
}
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        // bool ans=false;
        for(int i = 0; i < m; i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0]){
                 if(dfs(i,j,0,board,word)) return true;
                }
            }
            
        }
        return false;
        
    }
};