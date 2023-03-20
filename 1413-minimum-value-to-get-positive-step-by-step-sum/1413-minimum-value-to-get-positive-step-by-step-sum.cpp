class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int minSum{}, curSum{};
        
        for(auto &num:nums){
            curSum += num;
            minSum = min(minSum, curSum);
        }
        
        return -minSum + 1;
    }
};