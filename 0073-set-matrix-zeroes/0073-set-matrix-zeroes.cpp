class Solution {
public:
      void setZeroes(vector<vector<int>>& arr) {
        int n = arr.size();
        int m = arr[0].size();
         int x=0;
          int y=0;
          for(int i=0;i<n;i++){
              for(int j=0;j<m;j++){
                  if(i==0&& arr[i][j]==0)x=1;
                   if(j==0 && arr[i][j]==0)y=1;
                   if(arr[i][j]==0){
                       arr[i][0]=0;
                       arr[0][j]=0;
                   } 
              }
          }
          for(int i=1;i<n;i++){
              for(int j=1;j<m;j++){
                  if(arr[i][0]==0 ||arr[0][j]==0) arr[i][j]=0;
              }
          }
          if(x){
              for(int i=0;i<m;i++)arr[0][i]=0;
          }
          if(y){
              for(int i=0;i<n;i++)arr[i][0]=0;
          }
    }
};