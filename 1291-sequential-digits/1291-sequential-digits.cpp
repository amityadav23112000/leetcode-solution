class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
     vector<int>res;
        queue<int>q;
       for(int i=1;i<9;i++){
           q.push(i);
       }
        while(q.empty()==false){
            int num=q.front(); q.pop();
            if(num>=low &&num<=high){
                res.push_back(num);
            }
            if(num%10<9){
                int rem=num%10;
                q.push(num*10+rem+1);
            }
        }
        return res;
    }
};