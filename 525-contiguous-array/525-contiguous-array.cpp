class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=0;
        int ans=0;
        int sum=0;
    unordered_map<int ,int>m;
        m[0]=-1;
        while(j<n){
            if(nums[j]==0)sum+=-1;
            else sum+=nums[j];
           if(m.find(sum)!=m.end()){
           ans=max(ans,j-m[sum]);
             }
            else m[sum]=j;
            j++;
            
        }
        return ans;
    }
};