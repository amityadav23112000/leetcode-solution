class Solution {
public:
    int count=0;
    
    void dfs( int i,int j, int n, int m ,vector<vector<int>>&grid, vector<vector<int>>&vis){
        if(i>=n ||i<0|| j>=m|| j<0|| grid[i][j]==0|| vis[i][j]==1) return ;
        count++;
        vis[i][j]=1;
        dfs(i+1,j,n,m,grid,vis);
        dfs(i,j-1,n,m,grid,vis);
        dfs(i,j+1,n,m,grid,vis);
        dfs(i-1,j,n,m,grid,vis);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>>vis(n,vector<int>(m,0));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && vis[i][j]==0)
                {
                    dfs(i,j,n,m,grid,vis);
                    ans=max(ans,count);
                    count=0;
                }
            }
        }
        return ans;
    }
};