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
    int result=0;
public:
    int diameterOfBinaryTree(TreeNode* root) {
        godeep(root);
        return result;
        
    }
    int godeep(TreeNode* root){
        if(root==NULL)return 0;
        int left=godeep(root->left);
        int right=godeep(root->right);
        result=max(result,left+right);
        return max(left+1,right+1);
        
    }
};
