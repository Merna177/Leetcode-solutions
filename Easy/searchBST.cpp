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
    TreeNode* ret=NULL;
    TreeNode* searchBST(TreeNode* root, int val) {
        search(root,val);
        return ret;
    }
    void search(TreeNode* node,int val){
        if(ret!=NULL)
            return;
        if(node->val == val)
        {
            ret =node;
            return;
        }
        if(node->val > val && node->left!=NULL)
            search(node->left,val);
        else if(node->val < val && node->right !=NULL)
            search(node->right,val);
        
    }
};
