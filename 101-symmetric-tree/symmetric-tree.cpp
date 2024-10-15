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
// bool help(TreeNode* p,TreeNode*q ){
//       if(p==NULL&&q==NULL)
//          return true;
//        if(p==NULL&&q!=NULL||q==NULL&&p!=NULL)
//           return false;
//        if(p->val!=q->val)   
//           return false;
//        if(help(p->left,q->right)==false)
//           return false;

//         if(help(p->right,q->left)==false)
//           return false;  
//         return true;
// }










bool help(TreeNode*t1,TreeNode*t2){
    if(t1==NULL&&t2==NULL)
      return true;
    if(t1&&!t2)return false;
    if(t2&&!t1)return false;
    if(t1->val!=t2->val)return false;
    return help(t1->left,t2->right) && help(t1->right,t2->left);  
}





    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
         return true;
        return help(root->left,root->right);
    }



















};