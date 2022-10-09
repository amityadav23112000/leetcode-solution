class Solution {
public:
    bool isPossible(vector<int>& target) {
        long long  sum=0;
        priority_queue<int> pq;
        for(int i=0;i<target.size();i++){
            sum+=target[i];
            pq.push(target[i]);
        }
        
        while(pq.top()!=1){
            long long  top=pq.top();
            pq.pop();
            sum=sum-top;
            if(top<=sum||sum<=0) return false; 
            top=top%sum;
            pq.push(top>0? top:sum);
            sum=sum+top;
        }
        return true;
    }
};