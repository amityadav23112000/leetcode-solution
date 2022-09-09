class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n=nums.size();
        if(n==0)return 0;
     unordered_set<int>s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        int ans=1;
        for(int i=0;i<n;i++){
        
            if(s.find(nums[i]+1)==s.end()){
                int count=1;
                int a=nums[i];
                while(s.find(a-1)!=s.end()){
                    count++;
                    a=a-1;
                }
                ans=max(ans,count);
            }
        }
        return ans;
    }
};