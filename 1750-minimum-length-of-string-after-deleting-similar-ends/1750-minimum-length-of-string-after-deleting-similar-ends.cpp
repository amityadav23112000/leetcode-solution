class Solution {
public:
    int minimumLength(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j && s[i]==s[j]){
            char a=s[i];
            while(i<j && a==s[i]) i++;
             while(i<=j && a==s[j]) j--;
        }
        return j-i+1;
    }
};