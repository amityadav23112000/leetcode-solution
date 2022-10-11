class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double res;
        int sum=0;
        int i=0;
        int j=0;
        int ans=INT_MIN;
        while(j<nums.size()){
            sum+=nums[j];
            if(j-i+1<k) j++;
            else if(j-i+1==k){
                ans=max(sum,ans);
                sum-=nums[i];
                i++;
                j++;
            }
        }
        return res=(double)ans/k;
    }
};