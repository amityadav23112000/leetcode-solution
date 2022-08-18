class Solution {
public:
    int minSetSize(vector<int>& arr) {
        priority_queue<int> pq;
        unordered_map<int,int > m;
        for(auto x: arr) m[x]++;
        for(auto x: m) pq.push(x.second);
         int ans=0;
        int res=0;
        while( ans<arr.size()/2){
            ans+=pq.top();
            pq.pop(); 
            res++;
        }
        return res;
    }
};