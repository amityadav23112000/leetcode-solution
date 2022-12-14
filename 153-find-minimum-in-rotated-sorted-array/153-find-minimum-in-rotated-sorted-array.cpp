class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        if(nums[low]<=nums[high]) return nums[low];
        while(low<=high){
            int mid=low+ (high-low)/2;
            if( mid!=0 && nums[mid]<nums[mid-1] )
                return nums[mid];
           else if(nums[mid]>nums[mid+1]) return nums[mid+1];
           else if(nums[mid]>=nums[low]){
                low=mid+1;
                   }
            else if(nums[mid]<=nums[high]){
           high=mid-1;
      }
        }
        return nums[0];
    }
};