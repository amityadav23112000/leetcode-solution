class Solution {
public:
   

    void dfs(int node,vector<int> adjList[],vector<int> &vis)

    {

        vis[node]=1;

        for(int nbr:adjList[node])

        {

            if(!vis[nbr])

            dfs(nbr,adjList,vis);

        }

        return;

    }
    int findCircleNum(vector<vector<int>>& adj) {
        int V=adj.size();
         vector<int> adjList[V+1];
        for(int i=0;i<V;i++){

            for(int j=0;j<V;j++){

                if(adj[i][j]==1)

                adjList[i+1].push_back(j+1);

            }

        }

        int res=0;

        vector<int> vis(V+1,0);

        for(int i=1;i<=V;i++){

            if(!vis[i]){

                res++;

                dfs(i,adjList,vis);

            }

        }
        return res;
    }
};