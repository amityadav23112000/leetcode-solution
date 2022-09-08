class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
       int c=arr[0].size();
        int r=arr.size();
        for(int i=0;i<r;i++){
            for(int j=0;j<i;j++)
            {
                swap(arr[i][j],arr[j][i]);
            }
        }
        for(int i=0;i<r;i++){
            reverse(arr[i].begin(),arr[i].end());
        }
        
        }
        
    
};