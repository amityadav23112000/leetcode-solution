
class Solution {
public:
       void sumPaths(vector<vector<int>>&res,TreeNode* root,int& targetSum,vector<int>&path,int curSum){
        if(root==NULL)return;
        path.push_back(root->val);
        int newSum=curSum+root->val;
        if(!root->left and !root->right and newSum==targetSum){
            res.push_back(path);
        }
        if(root->left)sumPaths(res,root->left,targetSum,path,newSum);
        if(root->right) sumPaths(res,root->right,targetSum,path,newSum);

        path.pop_back() ;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>res;
        vector<int>path;
        sumPaths(res,root,targetSum,path,0);
        return res;
    }
};