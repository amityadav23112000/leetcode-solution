class Solution {
public:
    string getPermutation(int n, int k) {
       string str="";
        for(int i=1;i<=n;i++){
       str+=to_string(i);
        }
        k--;
        while(k--){
            next_permutation(str.begin(),str.end());
        }
        return str;
    }
};