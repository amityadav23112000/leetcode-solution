class Solution {
public:
    int similarPairs(vector<string>& w) {
        int cnt=0;
        vector<set<char>> v;
        for(int i=0;i<w.size();i++){
            set<char> st(w[i].begin(),w[i].end());
            v.push_back(st);
        }
        for(int i=0;i<w.size()-1;i++){
            for(int j=i+1;j<w.size();j++){
                if(v[i]==v[j]){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};