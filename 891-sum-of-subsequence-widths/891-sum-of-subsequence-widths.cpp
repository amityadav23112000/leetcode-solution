class Solution {
public:
    int sumSubseqWidths(vector<int>& nums) {
      int n = nums.size();
    int ans = 0;    
    sort(nums.begin(),nums.end());                        
    vector<long> exp(n, 0);
    exp[0] = 1;

    for (int i = 1; i < n; i++) {
        exp[i] = exp[i - 1] * 2 % 1000000007;
    }

    for(int i=0;i<n;i++){
        ans = ( ans + nums[i]*(exp[i] - exp[n-i-1])) %1000000007;
    }    
    return ans; 
    }
};