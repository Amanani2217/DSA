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
//  int height(TreeNode*root){
//     if(root==NULL)
//        return 0;
//     int l = 1+ height(root->left);
//     int r = 1+ height(root->right);
//     return max(l,r);
//   }
//   void help(TreeNode* root,int &maxl){
//     if(root==NULL)
//        return ;
//     maxl = max(maxl,(height(root->left)+height(root->right)));
//     help(root->left,maxl);
//     help(root->right,maxl);
//     //return maxl;
//   }
//     int diameterOfBinaryTree(TreeNode* root) {
//         if(root==NULL)
//            return 0;
//         int maxl = 0;
//         help(root,maxl);   
//        return maxl;
//     }




int height(TreeNode*root){
    if(root==NULL)
      return 0;
    return 1+max(height(root->left),height(root->right));
}

void help(TreeNode*root,int &maxi){
    if(root==NULL)
      return ;
    maxi = max(maxi,height(root->left)+height(root->right));
    help(root->left,maxi);
    help(root->right,maxi);
    //return maxi; 
}


  int diameterOfBinaryTree(TreeNode* root) {
      if(root==NULL)
         return 0;
     int maxi = 0;
      help(root,maxi);
      return maxi;    
  }
};