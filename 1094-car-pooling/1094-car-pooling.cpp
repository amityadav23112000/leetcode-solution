class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int maxi=-1;
        for(auto x:trips){
            maxi=max(x[2],maxi);
        }
        vector<int>v(maxi+1,0);
        for( auto x:trips){
            v[x[1]]+=x[0];
            v[x[2]]+=-x[0];
        }
        if(v[0]>capacity) return false;
        for(int i=1;i<v.size();i++){
            v[i]=v[i]+v[i-1];
            if(v[i]>capacity)return false;
        }
        return true;
    }
};