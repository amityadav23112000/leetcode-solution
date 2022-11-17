class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int ans=nums[0];
        int temp=nums[0];
        int end=0;
        for(int i=1;i<nums.size();i++){
            temp=max(nums[i],temp+nums[i]);
          if(temp>ans){
              end=i;
          }
            ans=max(ans,temp);
        }
    int start=end;
        int gobalmax=ans;
        while(start>=0){
            gobalmax-=nums[start];
            if(gobalmax==0){
                break;
            }
            start--;
        }
        
        for(int i=start;i<=end;i++){
            cout<<nums[i]<<" ";
        }
        return ans;
    }
};