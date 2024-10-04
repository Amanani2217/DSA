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
// int heightt(TreeNode* root) {
//         if(root==NULL)
//           return 0;
//         int l = 1+height(root->left);
//         int r = 1+height(root->right);
//         return max(l,r);
//     }
//     bool isBalanced(TreeNode* root) {
//         if(root==NULL)
//           return true;
       
//           int x = height(root->left)-height(root->right);
//           x=x<0?x*-1:x;
//            if(x>1)
//                return false;
//               if(isBalanced(root->left)==false)
//                    return false;   
//                 if(isBalanced(root->right)==false)
//                      return false;
//         return true; 
    
//     }
int help(TreeNode* root){
    if(root==NULL)
      return 0;
    return 1+max(help(root->left),help(root->right));
}
 int isBalanced(TreeNode* root) {
      if(root==NULL)
         return 1;
      if(abs(help(root->left)-help(root->right))>1)
         return false;
      if(isBalanced(root->left)==false)
         return false;
      if(isBalanced(root->right)==false)
        return false;
      return true;
    }
};