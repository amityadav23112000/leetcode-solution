class Solution {
public:
      int Calculate(vector<int>& nums,int k){
        int NumberOfHours=0;
        for(int i = 0; i < nums.size(); i++){
            NumberOfHours += (nums[i] % k == 0) ? nums[i] / k : (nums[i] /k)+1;
        }
        return NumberOfHours;
    }
    
    int smallestDivisor(vector<int>& nums, int H) {
         int left = 1;
        int right = *max_element(nums.begin(),nums.end());
        while(left < right){
           int k=(left + right)/2;    
            
           int NumberOfHours = Calculate(nums,k);
            
            if(NumberOfHours > H) {
                left = k+1;
            }
            else {
                right = k;
            }
        }
        return left;
    }
};