class Solution {
public:
    
    int helper(int i,vector<int>&dp,string s){
        if(s[i]=='0') return dp[i]=0;
        if(dp[i]!=-1) return dp[i];
        int ans=helper(i+1,dp,s);
       if(i<s.size()-1 && (s[i]=='1'||s[i]=='2'&&s[i+1]<'7')) ans+=helper(i+2,dp,s);
        return dp[i] = ans;
    }
    int numDecodings(string s) {
        int n=s.size();
        vector<int>dp(n+1,-1);
        dp[n]=1;
        if(n==0)return 0;
         return helper(0,dp,s); 
    }
};