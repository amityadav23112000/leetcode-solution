class Solution {
public:
    int gcd(int a,int b){
        if(b==0) return a;
        else return gcd(b,a%b);
    }
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int>m;
        for(auto x:deck){
            m[x]++;
        }
        int ans=0;
        for(auto x:m){
            ans=gcd(max(ans,x.second),min(ans,x.second));
        }
        if(ans>1) return true;
        return false;
    }
};