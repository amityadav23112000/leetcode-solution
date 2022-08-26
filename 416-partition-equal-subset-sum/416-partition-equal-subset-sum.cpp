class Solution {
public:
    bool canPartition(vector<int>& arr) {
            int n=arr.size();
         if(n==0) return false;
          int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
       if (sum % 2 != 0)
        return false;
        sum/=2;
      vector<vector<int>>dp(n+1,vector<int>(sum+1,0));
      for(int i=0;i<n;i++)dp[i][0]=1;
        if(arr[0]<=sum)
       dp[0][arr[0]]=1;
      for(int i=1;i<n;i++){
          for(int j=1;j<=sum;j++){
              int nottake=dp[i-1][j];
              int take=0;
              if(arr[i]<=j) take=dp[i-1][j-arr[i]];
              dp[i][j]=take||nottake;
          }
      }
      return dp[n-1][sum];
    }
};