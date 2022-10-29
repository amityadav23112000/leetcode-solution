class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string> > ans;
        map<vector<int> ,vector<string>>m;
        for(auto &s:strs){
            vector<int> v(26,0);
            for(auto &c:s){
                v[c-'a']++;
            }
            m[v].push_back(s);
        }
        for( auto &d:m){
            ans.push_back(d.second);
        }
        return ans;
    }
};