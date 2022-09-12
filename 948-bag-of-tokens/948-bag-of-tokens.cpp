class Solution {
public:
    int bagOfTokensScore(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1&& k<nums[0]) return 0;
        sort(nums.begin(),nums.end());
        int i=0,j=n-1;
        int count=0;
        while(i<j){
            if(nums[i]<=k){
                count++;
                k-=nums[i];
                i++;
            }
            else if(count>0) {
                count--;
                k+=nums[j];
                j--;
            } else{
                i++;
            }
        }
        if(i==j && nums[i]<=k){
            count++;
        }
        return count;
    }
};