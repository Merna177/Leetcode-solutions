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
     int val=0;
    int kthSmallest(TreeNode* root, int k) {
        inorder( root, k);
        return val;
        
    }
    void inorder(TreeNode* node,int& k){
        if(node==NULL)
            return ;
        inorder(node->left,k);
        k--;
        if(!k){
            val  = node->val;
            return;
        }
        inorder(node->right,k);
    }
};
