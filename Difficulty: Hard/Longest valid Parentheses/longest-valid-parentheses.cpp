//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxLength(string& s) {
        // code here
        int ans =0;
        int len=0;
        int open=0;
        int close =0;
        for(int i= 0;i<s.length();i++){
            if(s[i]=='(')open++;
            else close++;
            if(open == close)
              len = 2*close;
            if(close>open){
                open = 0;close =0;len=0;
            }
            ans=max(ans,len);
        }
       // return ans;
        open=0;
        close=0;
        len=0;
        for(int i= s.length()-1;i>=0;i--){
            if(s[i]=='(')open++;
            if(s[i]==')')close++;
            if(open == close)len = 2*close;
            if(open>close){
                open = 0;close =0;len=0;
            }
            ans=max(ans,len);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.maxLength(S) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends