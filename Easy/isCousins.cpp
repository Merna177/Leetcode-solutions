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
    int levelx=-1,levely=-1;
    int parentx=-1,parenty=-1;
    bool isCousins(TreeNode* root, int x, int y) {
        dfs(root, x,  y ,0,-1);
        if(levelx==levely && parentx!=parenty)
            return true;
        else 
            return false;
    }
    void dfs(TreeNode* node,int x,int y,int level,int parent){
        if(node==NULL)
            return;
        if(node->val ==x){
            levelx=level;
            parentx=parent;
        }else if(node->val ==y)
        {
            levely=level;
            parenty=parent;
        }
        dfs(node->left,x,y,level+1,node->val);
        dfs(node->right,x,y,level+1,node->val);

        
    }
};
