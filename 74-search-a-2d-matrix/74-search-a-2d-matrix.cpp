class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
      
        int n=arr.size();
         int i=0;
        int j=arr[0].size()-1;
        while(i<n && j>=0){
            if(arr[i][j]==target) return true;
            else if(arr[i][j]<target)
                i++;
            else j--;
        }
        return false;
    }
};