//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct node {
    string data;
    struct node *left;
    struct node *right;

    node(string x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};

bool isExpression(string &s) {
    if (s == "+" or s == "-" or s == "*" or s == "/") return true;
    return false;
}



// } Driver Code Ends
/*The structure of node is as follows
struct node{
    string data;
    node *left;
    node *right;
};
*/

class Solution{
  public:
    /*You are required to complete below method */
    vector<string>s;
    stack<int>st;
    void preorder(node * root){
        if(root){
            
            preorder(root->left);
            preorder(root->right);
            s.push_back(root->data);
        }
    }
    int evalTree(node* root) {
        // Your code here
        preorder(root);
        for(int i=0;i<s.size();i++){
           // 
              if(s[i]>="0"&&s[i]<="9"){
                  int t = stoi(s[i]);
                  st.push(t);
            }
               
            else{
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int t;
                char c = s[i][0];
                switch (c){
                    case '+':
                       t=b+a;
                       st.push(t);
                       break;
                    case '-':
                       t=b-a;
                       st.push(t);
                       break;
                    case '*':
                       t =b*a;
                       st.push(t);
                       break;
                    case '/':
                       t=b/a;
                       st.push(t);
                       break;
                }
            }   
        }
        return st.top();
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s[n];
        for (int i = 0; i < n; i++) cin >> s[i];

        int p = 0;
        node *root = new node(s[p++]);
        queue<node *> q;
        q.push(root);
        while (!q.empty()) {
            node *f = q.front();
            q.pop();
            node *l, *r;
            if (isExpression(f->data)) {
                l = new node(s[p++]);
                r = new node(s[p++]);
                f->left = l;
                f->right = r;
                q.push(l);
                q.push(r);
            }
        }
        Solution obj;
        cout << obj.evalTree(root) << endl;
    }
}

// } Driver Code Ends