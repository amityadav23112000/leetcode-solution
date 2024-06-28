class Solution {
public:
    int longestWPI(vector<int>& hours) {
    for(int i=0;i<hours.size();i++){if(hours[i]>8)hours[i]=1;
        else hours[i]=-1; }
        unordered_map<int,int>m;
        int sum=0;
        int ans=0;
        for(int i=0;i<hours.size();i++){
          sum+=hours[i];
        if(sum>0)ans=i+1;
        if (m.find(sum) == m.end())
        m[sum] = i;
        if (m.find(sum - 1) != m.end())
        ans = max(ans, i - m[sum - 1]);
        }
        return ans;
        
    }
};