class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int i=0;
        int j=0;
        int ans=0;
        unordered_map<char,int>m;
        while(j<n){
             m[s[j]]++;
            if(j-i+1==m.size()){
                ans=max(ans,j-i+1);
                j++;
            }
            else if(m.size()<j-i+1){
                while(m.size()<j-i+1){
                    m[s[i]]--;
                    if(m[s[i]]==0)m.erase(s[i]);
                    i++;
                }
                j++;
            }
        }
        return ans;
    }
};