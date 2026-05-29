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

void helper(TreeNode* root,vector<int>& output)
    {
        if(!root)  return;          // Sukhmaneet kaur
        helper(root->left,output);   //traverse left sub-tree
        helper(root->right,output); //traverse right sub-tree
        output.push_back(root->val); //push root
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> output;
        helper(root,output);
        return output;
    }
};