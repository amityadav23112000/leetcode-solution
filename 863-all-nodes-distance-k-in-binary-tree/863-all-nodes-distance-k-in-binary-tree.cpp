/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
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
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode* ,TreeNode*>parent;
         helper(root,parent);
        unordered_map<TreeNode*,bool> vis;
        queue<TreeNode*>q;
        q.push(target);
        int curr=0;
        vis[target]=true;
        while(q.empty()==false){
            int n=q.size();
            if(curr==k) break; curr++;
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
        }
        vector<int>ans;
        while(q.empty()==false){
            ans.push_back(q.front()->val);
            q.pop();
        }
        return ans;
    }
};