/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode*target=nullptr;
   bool search( TreeNode * root, int start){
        if(root==NULL)  return false;
        if(root->val==start)  {
            target=root;
            return true;
        }
           bool lh=search(root->left,start) ;
        if( lh) return true;
          bool rh= search(root->right,start);
       if(rh)return true;
       return false;
        
    }
      void helper(TreeNode* root,unordered_map<TreeNode* ,TreeNode*>&parent){
        queue<TreeNode* >q;
        q.push(root);
        parent[root]=root;
        while(q.empty()==false)
        {
            TreeNode* curr=q.front(); q.pop();
            if(curr->left){
                q.push(curr->left);
                parent[curr->left]=curr;
            }
             if(curr->right){
                q.push(curr->right);
                parent[curr->right]=curr;
            }
            
        }  
    }
    int amountOfTime(TreeNode* root, int start) {
         bool t=search(root,start);
           unordered_map<TreeNode* ,TreeNode*>parent;
         helper(root,parent);
        unordered_map<TreeNode*,bool> vis;
        queue<TreeNode*>q;
        q.push(target);
        int curr=0;
        vis[target]=true;
        while(q.empty()==false){
            int n=q.size();
              
            for( int i=0;i<n;i++){
                 TreeNode* curr=q.front();
                q.pop();
                if(curr->left && vis[curr->left]==false){
                    vis[curr->left]=true;
                    q.push(curr->left);
                }
                 if(curr->right && vis[curr->right]==false){
                    vis[curr->right]=true;
                    q.push(curr->right);
                }
                 if( parent[curr]&& vis[parent[curr]]==false){
                    vis[parent[curr]]=true;
                    q.push(parent[curr]);
                }
            }
            curr++;
        }
        return curr-1;
    }
};