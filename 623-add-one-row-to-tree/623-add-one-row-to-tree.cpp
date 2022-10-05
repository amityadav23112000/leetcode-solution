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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
    if(depth==1){
        TreeNode *nroot =new TreeNode(val);
        nroot->left=root;
        return nroot;
    } 
        int flag=0;
        queue< pair<TreeNode*,int>> q;
        q.push({root,1});
        while(q.empty()==false){
            int count=q.size();
           for(int i=0;i<count;i++){
               auto it=q.front();
                  q.pop();
               TreeNode *curr=it.first;
               int dp= it.second;
                if(dp!=depth-1)
               {
                   if(curr->left)
                       q.push({curr->left,dp+1});
                   
                  if(curr->right)
                      q.push({curr->right,dp+1});
                   
               }
               else {
                  TreeNode* temp= new TreeNode(val);
                  temp->left= curr->left;
                   curr->left= temp;
                  TreeNode* temp1= new TreeNode(val);
                   temp1->right= curr->right;
                   curr->right=temp1;
                   flag=1;
               } 
           }
            if(flag==1) break;
        }
        return root;
    }
};