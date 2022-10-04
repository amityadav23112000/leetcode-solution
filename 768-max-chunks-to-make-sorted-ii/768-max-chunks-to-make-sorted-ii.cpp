class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();
        int count=1;
       int max=arr[0];
        int leftmax[n] ,rightmin[n];
        leftmax[0]=arr[0];
        rightmin[n-1]=arr[n-1];
        for(int i=1;i<n;i++){
            if(max<=arr[i]){
                max=arr[i];
            }
          leftmax[i]=max;
        }
        int mini=arr[n-1];
         for(int i=n-2;i>=0;i--){
            if(mini>=arr[i]){
                mini=arr[i];
            }
          rightmin[i]=mini;
        }
        for(int i=0;i<n-1;i++){
           
            if(leftmax[i]<=rightmin[i+1])count++;
        }
        
        return count;
    }
};