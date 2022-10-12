class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
      long long  ans=0;
        long long  even=0;
        long long odd=0;
        long long sum=0;
        for(int i=0;i<size(arr);i++){
            sum+=arr[i];
            if(sum%2==0){
                ans+=odd;
                even++;
            }
            else{
                ans+=even+1;
                odd++;
            }
        
        }
        return ans%1000000007;
    }
};