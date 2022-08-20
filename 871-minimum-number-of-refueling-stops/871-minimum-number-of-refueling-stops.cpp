class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& s) {
       int maxreach=startFuel;
        priority_queue<int> pq;
        int index=0;
        int count=0;
        while(maxreach<target){
            while(index<s.size()&& s[index][0]<=maxreach){
                
                pq.push(s[index][1]);  
                index++;
            }
            if(pq.empty()) return -1;
             maxreach+=pq.top();
              pq.pop();
               count++;
        }
        return count;
    }
};