class Solution {
public:
    bool ispalindrome(int i,int j,string &str){
        while(i<j){
            if(str[i++]!=str[j--]) return 0;
        }
        return 1;
    }
 int helper(int i,string &s,vector<int>&dp){
     if(i==s.size()) return 0;
     if(dp[i]!=-1)return dp[i];
      int ans=INT_MAX;
      
     for(int j=i;j<=s.size();j++){
        
         if(ispalindrome(i,j,s)){
             int cost=1+helper(j+1,s,dp);
             ans=min(ans,cost);
         }
     }
     return dp[i]=ans;
 }
    int minCut(string str) {
        int n=str.size();
         vector<int>dp(n,-1);
         return helper(0,str,dp)-1;
    }
};