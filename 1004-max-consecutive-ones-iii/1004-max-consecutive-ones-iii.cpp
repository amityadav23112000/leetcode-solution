class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int ans=0;
        int n=nums.size();
        int count=0;
        while(j<n)
        {
            if(nums[j]==0 )count++;
            while(count>k){
                if(nums[i]==0)count--;
                i++;
            }
            ans=max(j-i+1,ans);
            
           j++;
        }
        return ans;
    }
};