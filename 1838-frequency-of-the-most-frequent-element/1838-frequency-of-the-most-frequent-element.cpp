class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long right=0;
        long long left=0;
        long long  sum=0;
        long long  res=0;
        while(right<size(nums)){
            sum+=nums[right];
            while((nums[right]*(right-left+1)) > sum+k){
                sum-=nums[left];
                left++;
            }
            if(res<(right-left+1)){
                res=right-left+1;
            }
            right++;
        }
        return res;
    }
};