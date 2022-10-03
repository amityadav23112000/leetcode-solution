class Solution {
public:
     bool issafe(int i,int j,int m,int n,vector<vector<int>>&visited){
        if(i<0 || j<0 || i>=m || j>=n || visited[i][j]>-1){
            return false;
        }
        return true;

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
         int r=image.size();
         int c=image[0].size();
         vector<vector<int>>vis(r,vector<int>(c,-1));
         queue<pair<int,int>>q;
         q.push({sr,sc});
         vis[sr][sc]=newcolor;
         int ol=image[sr][sc];
         image[sr][sc]=newcolor;
         while(q.empty()==false){
             auto it=q.front();
             int rr=it.first;
             int cc=it.second;
             q.pop();
             int nc=vis[rr][cc];
             if(  issafe(rr+1,cc,r,c,vis) && image[rr+1][cc]==ol){
                 q.push({rr+1,cc});
                 vis[rr+1][cc]=nc;
                 image[rr+1][cc]=nc;
             }
             if(issafe(rr,cc+1,r,c,vis)&&image[rr][cc+1]==ol){
                 q.push({rr,cc+1});
                 vis[rr][cc+1]=nc;
                 image[rr][cc+1]=nc;
             }
             if(issafe(rr-1,cc,r,c,vis)&& image[rr-1][cc]==ol){
                 q.push({rr-1,cc});
                 vis[rr-1][cc]=nc;
                 image[rr-1][cc]=nc;
             }
             if(issafe(rr,cc-1,r,c,vis)&& image[rr][cc-1]==ol) {
                 q.push({rr,cc-1});
                 vis[rr][cc-1]=nc;
                 image[rr][cc-1]=nc;
             }
         }
         return image;
    }
};