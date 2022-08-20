class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxjump=-1;
        int i=0;
        while(i<n){
            if(i+nums[i]>=n-1) return true;
            maxjump=max(maxjump,i+nums[i]);
            if(nums[i]==0){
                if(maxjump>i)i=i;
                else if(maxjump!=n-1) return false ;
            
            }
            i++;
        }
        return true;
    }
};