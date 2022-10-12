class Solution {
public:
    string makeFancyString(string s) {
        string ans="";
        int count=1;
        ans+=s[0];
        for(int i=1;i<size(s);i++){
            if(s[i]==s[i-1]&& count<2){
                ans+=s[i];
                count++;
            }
            else if(count==2 && s[i]==s[i-1]){
                while(s[i]==s[i-1]) i++;
                i--;
            }
            else {
                ans+=s[i];
                count=1;
            }
            
        }
        return ans;
    }
};