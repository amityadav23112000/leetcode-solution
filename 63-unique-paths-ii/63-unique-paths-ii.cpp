class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        
      int n=arr.size();
        int m=arr[0].size();
        if(arr[0][0]==1) return 0;
       vector<vector<int>>dp(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 && j==0)dp[i][j]=1;
                else if(arr[i][j]==1) dp[i][j]=0;
                else {
                    int up=0;
                    int left=0;
                    if(j>0) left=dp[i][j-1];
                    if(i>0) up=dp[i-1][j];
                    dp[i][j]=left+up;
                }
            }
        }
        return dp[n-1][m-1];
            
    }
};