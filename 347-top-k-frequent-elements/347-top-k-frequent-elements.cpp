class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        priority_queue<pair<int ,int>>p;
        for(auto x: m){
            p.push({x.second,x.first});
        }
        vector<int>ans;
        for(int i=0;i<k;i++){
            auto x=p.top();
            p.pop();
            ans.push_back(x.second);
        }
       return ans; 
    }
};