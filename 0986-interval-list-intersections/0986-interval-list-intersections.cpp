class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& f, vector<vector<int>>& s) {
        vector<vector<int>>ans;
      if(f.size()==0 || s.size()==0) return {};
      
        for(int i=0,j=0;i<f.size()&& j<s.size();){
            int start=max(f[i][0],s[j][0]);
            int end=min(f[i][1],s[j][1]);
            if(start<=end){
                vector<int>temp;
                temp.push_back(start);
                temp.push_back(end);
                ans.push_back(temp);
            }
            if(f[i][1]<s[j][1]) i++;
            else j++;
        }
         return ans;
    }
};