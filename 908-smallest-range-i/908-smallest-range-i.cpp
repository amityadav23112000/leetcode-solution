class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int  mini=*min_element(nums.begin(),nums.end());
        int maxi=*max_element(nums.begin(),nums.end());
        int ans=(maxi-k)-(mini+k);
         if(ans<0) return 0;
          return ans;
    }
};