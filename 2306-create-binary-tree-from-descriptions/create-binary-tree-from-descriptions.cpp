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
unordered_map<int,TreeNode*>mp;
unordered_set<int>child;
        void solve(vector<int>des){
            //for root
            if(!mp.count(des[0])){
                TreeNode* node = new TreeNode(des[0]);
                mp[des[0]]=node;
            }

            //for child
            if(!mp.count(des[1])){
                TreeNode* node = new TreeNode(des[1]);
                mp[des[1]]=node;
                 
            }
            child.insert(des[1]);
           
            if(des.back()==1){
                mp[des[0]]->left=mp[des[1]];
            }
            else{
                 mp[des[0]]->right=mp[des[1]];
            }
        }

    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        
        for(int i = 0; i < descriptions.size(); i++){
            solve(descriptions[i]);
        }
        
        
        for(auto &v:descriptions){
            int parent=v[0];
            if(!child.count(parent)){
                return mp[parent];
            }
        }
         return NULL;

        
    }
};