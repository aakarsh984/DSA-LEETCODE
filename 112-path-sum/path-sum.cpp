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
    bool solve(TreeNode* root, int t){
        if(root->left==NULL and root->right==NULL ){
            return root->val==t;
        }
        bool left=false;
        bool right=false;

        if(root->left != NULL)
        left=solve(root->left,t-root->val);

        if(root->right != NULL)
        right=solve(root->right,t-root->val);

        return left||right;



    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr)return false;
        return solve(root,targetSum);
        
        
    }
};