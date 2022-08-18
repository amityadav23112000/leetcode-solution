class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int sum) {
       unordered_map<int,int> m;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(m.find(sum-nums[i])!=m.end()){
                ans.push_back(m[sum-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            m[nums[i]]=i;
            
        }
        return ans;
    }  
};