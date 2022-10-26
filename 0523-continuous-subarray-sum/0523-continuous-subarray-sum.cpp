class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
          unordered_set<int> s;
    
    int total = 0, pre;
    
    for(auto x: nums)
    {
        pre = total;
        
        total = x + total;
        
        if(s.count(total % k))
        {
            return true;
        }
        
        s.insert(pre % k);
       
    }
    
    return false;
    }
};