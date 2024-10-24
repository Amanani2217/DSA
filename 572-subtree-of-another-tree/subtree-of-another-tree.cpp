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
bool help(TreeNode*root,TreeNode*shoot){
    if(root==NULL&&shoot==NULL)return true;
    if(root&&!shoot || shoot&&!root)return false;
    if(root->val!=shoot->val)return false;
    return help(root->left,shoot->left)&&help(root->right,shoot->right);
}

    bool isSubtree(TreeNode* root, TreeNode* shoot) {
        if(root==NULL)
      return false ;
    if(root->val==shoot->val)
      if(help(root,shoot))return true;
    return isSubtree(root->left,shoot) || isSubtree(root->right,shoot);
    }
};