class Solution {
public:
    bool helper(vector<vector<char>>&board,int i,int j,int index, int n, int m ,string &word,vector<vector<int>>&vis){
          if(index==word.size()) return true; 
          if(i<0 || i==n|| j<0|| j==m||vis[i][j]==1) return false;
         if(board[i][j]!=word[index]) return false;
         vis[i][j]=1;
        if(helper(board,i-1,j,index+1,n,m,word,vis)) return true;
        if(helper(board,i,j-1,index+1,n,m,word,vis)) return true;
        if(helper(board,i,j+1,index+1,n,m,word,vis)) return true;
        if(helper(board,i+1,j,index+1,n,m,word,vis)) return true;
        vis[i][j]=0;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0])
                 if(helper(board,i,j,0,n,m,word,vis)){
                     return true;
            }
            }
        }
        
        return false ;
    }
};