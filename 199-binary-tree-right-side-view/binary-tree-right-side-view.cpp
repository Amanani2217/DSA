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
    vector<int> rightSideView(TreeNode* root) {
        
        // vector<int>v;
        // if(root==NULL)
        //   return v;
        // queue<TreeNode*>q;
        // TreeNode*temp ;
        // q.push(root);
        // while(!q.empty()){
        //     int size= q.size();
        //     for(int i = 0 ;i<size;i++){
        //         temp = q.front();
        //         q.pop();
        //        if(temp->left)
        //            q.push(temp->left);
        //        if(temp->right)
        //           q.push(temp->right);
        //     }
        //     v.push_back(temp->val);
        // }
        // return v;

vector<int>ans;
if(root==NULL)
  return ans;
queue<TreeNode*>q;
q.push(root);
while(!q.empty()){
    vector<int>v;
    int size   = q.size();
    for(int i =0 ;i<size;i++){
      TreeNode* temp = q.front();
      if(temp->left)
        q.push(temp->left);
      if(temp->right)
        q.push(temp->right);
      v.push_back(temp->val);  
      q.pop();  
    }
    ans.push_back(v[v.size()-1]);
    }
    return ans;
}
};