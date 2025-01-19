//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  void help(stack<int>&s,int n,int k ){
      if(k==n){
         s.pop();
         return;
      }
      int t = s.top();
      s.pop();
      help(s,n,k+1);
      s.push(t);
      
  }
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        // code here..
        help(s,(s.size()+2)/2,1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        stack<int> s;
        int num;
        while (ss >> num) {
            s.push(num);
        }

        Solution ob;
        ob.deleteMid(s);
        while (!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends