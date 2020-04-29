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
    int mx=INT_MIN;
    int maxPathSum(TreeNode* root) {
        dfs( root );
        return mx;   
    }
    int dfs(TreeNode* root){
        if(root==NULL)
            return 0;
        
        int left=0,right=0;
        if(root->left!=NULL)
            left = dfs(root->left);
        if(root->right!=NULL)
            right = dfs(root->right);
        //get max of this subtree if it left or right or left+right
        int leftOrRight = max(root->val, root->val+max(left,right));
        mx = max(mx,max(leftOrRight , root->val+left+right));
        return leftOrRight;
        
    }
};
