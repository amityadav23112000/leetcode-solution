
#pragma GCC target("avx,mmx,sse2,sse3,sse4")
auto _=[]()noexcept{ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int adj[1000][1000];
int asz[1000];
class Solution {
  int sz;
  vector<int> tmp;
  void update(vector<vector<int>> &r,int ind){
    if(!r[ind].empty()) return;
    if(asz[ind]==0) return;
    const auto &nei=adj[ind];
    for(int i=0;i<asz[ind];++i) update(r,nei[i]);
    auto &v=r[ind];
    for(int i=0;i<asz[ind];++i) v.emplace_back(nei[i]);
    for(int i=0;i<asz[ind];++i) combine(v,r[nei[i]]);
  }
  void combine(vector<int> &a,const vector<int> &b){
    int sza=a.size(),szb=b.size(),i=0,j=0;
    tmp.clear();
    while(i<sza&&j<szb){
      if(a[i]==b[j]){tmp.emplace_back(a[i]);++i,++j;}
      else if(a[i]<b[j]){tmp.emplace_back(a[i]);++i;}
      else {tmp.emplace_back(b[j]);++j;}
    }
    for(;i<sza;++i) tmp.emplace_back(a[i]);
    for(;j<szb;++j) tmp.emplace_back(b[j]);
    swap(a,tmp);
  }
public:
  vector<vector<int>> getAncestors(int n,const vector<vector<int>>& edges) {
    memset(asz,0,n*sizeof(asz[0]));
    sz=n;
    for(const auto &v:edges) adj[v[1]][asz[v[1]]++]=v[0];
    for(int i=0;i<n;++i) sort(adj[i],adj[i]+asz[i]);
    vector<vector<int>> r(n);
    for(int i=0;i<n;++i) update(r,i);
    return r;
  }
};