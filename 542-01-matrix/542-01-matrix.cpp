class Solution {
public:
     bool isvalid(int i, int j , int m, int n )
    {
        if(i<0 || j<0 || i>=m || j>=n)  return 0;
        return 1;
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        queue<pair<int,int>>q;
        vector<vector<int>>ans(n,vector<int>(m,0));
          vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                  
                    vis[i][j]=1;
                    q.push({i,j});
                }
            }
        }
        while(q.empty()==false){
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            int dist=ans[i][j];
                     if(isvalid(i+1,j,n,m) && !vis[i+1][j]) q.push({i+1,j}),ans[i+1][j] = dist+1, vis[i+1][j]=1;
            if(isvalid(i-1,j,n,m) && !vis[i-1][j]) q.push({(i-1),j}),ans[i-1][j] = dist+1, vis[i-1][j]=1;
            if(isvalid(i,j+1,n,m) && !vis[i][j+1]) q.push({i,j+1}),ans[i][j+1] = dist+1, vis[i][j+1]=1;
            if(isvalid(i,j-1,n,m) && !vis[i][j-1]) q.push({i,j-1}),ans[i][j-1] = dist+1, vis[i][j-1]=1;
        }
       return ans; 
    }
};