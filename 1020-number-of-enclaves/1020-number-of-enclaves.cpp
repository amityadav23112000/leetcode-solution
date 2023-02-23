class Solution {
public:
    void dfs(vector<vector<int>>& grid ,vector<vector<int>> &vis,int i,int j,vector<vector<int>>&ans ,int n,int m){
        if(i<0 || j<0 || i>=n || j>=m || vis[i][j] ==1 || grid[i][j]==0) return;
        vis[i][j]=1;
        ans[i][j]=1;
        dfs(grid,vis,i-1,j,ans,n,m);
        dfs(grid,vis,i+1,j,ans,n,m);
        dfs(grid,vis,i,j-1,ans,n,m);
        dfs(grid,vis,i,j+1,ans,n,m);
        return ;
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<vector<int>>ans(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++){
              int j=0;
            if(grid[i][j]==1) dfs(grid,vis,i,j,ans ,n,m);
             j=m-1;
            if(grid[i][j]==1) dfs(grid,vis,i,j,ans,n,m);
        }
        
        for(int j=0;j<m;j++){
              int i=0;
            if(grid[i][j]==1) dfs(grid,vis,i,j,ans,n,m);
               i=n-1;
            if(grid[i][j]==1) dfs(grid,vis,i,j,ans,n,m);
        }
        int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==1 && ans[i][j]!=1)count++;
        }
    }
        return count;
            
    }
};