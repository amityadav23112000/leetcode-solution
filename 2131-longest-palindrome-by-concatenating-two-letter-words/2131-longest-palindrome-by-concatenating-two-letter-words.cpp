class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        map<string,int>m;
        int ans=0;
        for(int i=0;i<words.size();i++){
            string str=words[i];
            reverse(str.begin(),str.end());
            if(m.find(str)!=m.end())
            {    ans+=4;
                m[str]--;
             if(m[str]==0) m.erase(str);
            }
            else
                m[words[i]]++;
        }
        for(auto it:m){
            if(it.first[0]==it.first[1])
            {    ans+=2; break;}
            
        }
      
        return ans;
    } 
};