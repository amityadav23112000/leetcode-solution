
class Solution {
public:
  vector<vector<int>>res;
    vector<int>v;
    int sum=0;
    void helper(TreeNode* root,int target){
        if(root==nullptr)return ;
        v.push_back(root->val);
        sum+=root->val;
        if(sum==target && root->left==nullptr && root->right==nullptr )
        { res.push_back(v);
        }
        helper(root->left,target);
        helper(root->right,target);
        v.pop_back();
        sum-=root->val;
     }
    vector<vector<int>> pathSum(TreeNode* root, int target) {
        helper(root,target);
        return res;
    }
};