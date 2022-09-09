class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int b=nums[n-1][1];
        int lmax=nums[n-1][1];
        int a=nums[n-1][0];
        int ans=0;
        for(int i=n-2;i>=0;i--){
           if(nums[i][0]<nums[i+1][0]){
               b=max(lmax,b);
               lmax=max(lmax,nums[i][1]); 
           }
            if(nums[i][0]<a&& nums[i][1]<b){
                ans++;
            }
        }
        return ans;
    }
};