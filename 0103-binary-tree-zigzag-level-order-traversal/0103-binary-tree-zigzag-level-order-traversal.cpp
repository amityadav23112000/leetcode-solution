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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
          vector<vector<int>>ans;
         if(root==NULL)
            return ans;
        stack<TreeNode*>st;
		//stack being a lifo data structure, helps in reversing the elements 
        queue<TreeNode*>q;
        q.push(root);
        bool reverse=false;
        while(!q.empty())            
        {            
            int size=q.size();
            vector<int>vect;
            for(int i=0;i<size;i++)
            {                
                TreeNode *temp= q.front();
                q.pop();
                if(reverse)     // helps to know when to reverse the elements 
                {
                    st.push(temp);
                }
                else
                    vect.push_back(temp->val);                    
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
            }
            if(reverse)
            {
                while(!st.empty())
                {
                 vect.push_back(st.top()->val);
                 st.pop();
                }
            }
                reverse=!reverse;
                ans.push_back(vect);                
        }             
        return ans;
    }
};