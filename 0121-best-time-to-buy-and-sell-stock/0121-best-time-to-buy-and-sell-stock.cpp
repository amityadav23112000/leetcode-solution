class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int curr=arr[0];
        int ans=0;
        for(int i=1;i<size(arr);i++){
            if(arr[i]<curr)curr=arr[i];
            else {
                ans=max(ans,arr[i]-curr);
            }
        }
        return ans;
    }
};