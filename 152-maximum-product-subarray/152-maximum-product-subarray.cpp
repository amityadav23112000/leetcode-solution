class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long left=1;
        long long lans=INT_MIN;
        long long rans=INT_MIN;
        long long right=1;
        for(int i=0;i<nums.size();i++){
            left*=nums[i];
            lans=max(left,lans);
            if(left==0){
                left=1;
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            right*=nums[i];
            rans=max(right,rans);
            if(right==0){
                right=1;
            }
        }
        return max(lans,rans);
    }
};