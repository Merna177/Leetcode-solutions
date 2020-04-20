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
    int indx=0;
public:
  TreeNode* construct(vector<int >& preorder, int mn, int mx) {
          if(indx == preorder.size())
            return nullptr;
          if(preorder[indx]> mn && preorder[indx]<mx){
             TreeNode * root= new TreeNode(preorder[indx++]);
             root->left = construct(preorder,mn,root->val);
             root->right = construct(preorder,root->val,mx);
             return root;


          }
      return nullptr;
  }
 public:
 TreeNode* bstFromPreorder(vector<int>& preorder) 
    {
        TreeNode * root = new TreeNode();
        
        if(preorder.size()  == 0)
            return root;
        
        root->val = preorder[indx++];
        root->left =construct(preorder,0,root->val);
        root->right = construct(preorder,root->val, INT_MAX);
        return root;
    }
};
