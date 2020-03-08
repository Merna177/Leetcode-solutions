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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        go( root,res);
        return res;
    }
    void go(TreeNode* root, vector<int> & res){
        if(root==NULL)
            return;
        
        go(root->left,res);
        res.push_back(root->val);
        go(root->right,res);
    }
};
