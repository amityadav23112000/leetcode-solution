class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int ans=0;
        int count=0;
        for(auto x:arr){
            if( x%2!=0){
                count++;
            }
            else{
                ans=max(count,ans);
                count=0;
            }
        }
        ans=max(count,ans);
        return ans>=3;
        
    }
};