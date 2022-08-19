class Solution {
public:
    
    bool bfs(vector<vector<int>>& graph, vector<int> & vis,int s){
        vis[s]=1;
        queue<int>q;
        q.push(s);
        while(q.empty()==false){
            int node=q.front();
            q.pop();
            for( auto x: graph[node]){
                if(vis[x]==-1){
                    vis[x]=1-vis[node];
                     q.push(x);
                }
                else if( vis[x]==vis[node]) return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n =graph.size();
         vector<int> vis(n,-1);
        for( int i=0;i<n;i++){
            if(vis[i]==-1){
                if(bfs(graph,vis,i)==false)
                    return false;
            }
        }
        return true;
    }
};