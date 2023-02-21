class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n=arr.size();
     if(n==1)return arr[0];
        if(arr[0]!=arr[1])return arr[0];
        if(arr[n-2]!=arr[n-1])return arr[n-1];
      long long low=0;
        long long high=arr.size()-1;
        while(low<=high){
            long long mid=low+ (high-low)/2;
            if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1])return arr[mid];
            else if(arr[mid]==arr[mid-1]){
                long long  count=mid-low+1;
                if(count%2==0){
                    low=mid+1;
                }
                else high=mid-2;
            }
            else if(arr[mid]==arr[mid+1]){
                  long long count=high-mid+1;
                if(count%2==0){
                    high=mid-1;
                }
                else low=mid+2;
            }
        }
        return -1;
    }
};