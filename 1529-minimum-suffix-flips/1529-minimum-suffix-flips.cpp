class Solution {
public:
    int minFlips(string target) {
        int ans=0;
        int future=0;
        for(int i =0; i<target.size();i++){
            if(target[i]-'0'==future)continue;
              ans++;
             future=future==1?0:1;     
        }
        return ans;
    }
};