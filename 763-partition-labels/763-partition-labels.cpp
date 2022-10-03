class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]=i;
        }
        vector<int>ans;
        int max=-1;
        int prev=-1;
        for(int i=0;i<size(s);i++){
            if(max<m[s[i]])
                max=m[s[i]];
              if(max==i){
                ans.push_back(max-prev);
                prev=max;
            }
        }
        return ans;
    }
};