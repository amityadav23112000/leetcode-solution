class Solution {
public:
   
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& q) {
       vector<int >ans;
        int sum=0;
        for(auto x:nums){
            if(x%2==0)sum+=x;
        }
        for(int i=0;i<q.size();i++){
            int index=q[i][1];
            int val=q[i][0];
            int newvalue=nums[index]+val;
            if(nums[index]%2==0) sum-=nums[index];
            nums[index]=newvalue;
            if(nums[index]%2==0) sum+=nums[index];
             ans.push_back(sum); 
        }
        return ans;
    }
};