class Solution {
public:
    bool ispossible( vector<int>nums,int d,int mid){
        int sum=0;
        int st=1;
        for(int i=0;i<nums.size();i++){
             sum+=nums[i];
            if(sum>mid){
                st++;
                sum=nums[i];
            }
            
        }
        return st<=d;
    }
    int shipWithinDays(vector<int>& nums, int d) {
       int n=nums.size();
        int maxi=*max_element(nums.begin(),nums.end());
        int sum=accumulate(nums.begin(),nums.end(),0);
        
        int low=maxi;
        int high=sum;
        int ans;
        while(low<=high){
            int mid=(low+high)/2;
            if(ispossible(nums,d,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};