

class Solution {
public: 
     Node* dfs(Node* curr, unordered_map<Node*,Node*>&m){
            vector<Node*> v;
          Node* clone= new Node(curr->val);
           m[curr]=clone;
         for(auto x: curr->neighbors){
             if(m.find(x)!=m.end()){
                 v.push_back(m[x]);
             }
             else {
                 v.push_back(dfs(x,m));
             }
         }
         clone->neighbors=v;
         return clone;
     }
    Node* cloneGraph(Node* node) {
        if(node==nullptr)return nullptr;
        unordered_map<Node*,Node*> m;
        if(node->neighbors.size()==0){
             Node* clone= new  Node(node->val);
            return clone;
        }
        return dfs(node, m);
        
    }
};