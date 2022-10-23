class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
       vector<int>ans;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        int a,b;
        for(int i=1;i<=n;i++){
            if(m.find(i)!=m.end()){
                if(m[i]>1) a=i;
            }
            else{
                b=i;
            }
        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};