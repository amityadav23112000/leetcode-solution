class Solution {
public:
    int pivotInteger(int n) {
       int low=1;
        int high=n;
        while(low<=high){
           int mid=(low+high)/2;
           int x=mid*(mid+1)/2;
           int y =n*(n+1)/2 - x + mid;
           if(x==y)return mid;
           else if(x>y)high=mid-1;
           else low=mid+1;
        }
        return -1;
    }
};