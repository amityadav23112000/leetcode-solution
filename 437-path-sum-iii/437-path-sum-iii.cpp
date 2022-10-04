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
   int pathSum(TreeNode* root, int sum) {
        return root ? f(root, sum) + pathSum(root->left, sum) + pathSum(root->right, sum) : 0;
    }
    
    long long  f(TreeNode* root, long long  sum) {
        return root ? (root->val == sum) + f(root->left, sum - root->val) + f(root->right, sum - root->val) : 0;
    }
};