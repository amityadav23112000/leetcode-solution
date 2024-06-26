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
        vector<int>v;
     void print(TreeNode* root){
         if(root==NULL) return ;
         print(root->left);
         v.push_back(root->val);
         print(root->right);
         
     }
  
 TreeNode* sortedArrayToBST(vector<int> arr, int start, int end) 
{ 
    
    if (start > end) 
        return NULL; 
  
    int mid = (start + end)/2; 
    TreeNode *root = new TreeNode(arr[mid]); 
  
    
    root->left = sortedArrayToBST(arr, start, mid - 1); 
    root->right = sortedArrayToBST(arr, mid + 1, end); 
 
    return root; 
} 

    
 
 

    TreeNode* balanceBST(TreeNode* root) {
       print(root);
      TreeNode * ans=sortedArrayToBST( v,0,v.size()-1);
        return ans;
    
    }
};