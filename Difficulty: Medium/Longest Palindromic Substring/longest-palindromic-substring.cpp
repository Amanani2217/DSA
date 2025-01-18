//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    string longestPalindrome(string s) {
        // code here
        int n = s.length();
        int maxlen = 0;
        string ans = "";
        for(int i =0 ;i<n;i++){
            int l= i;
            int r= i;
            while(l>=0&&r<n&&s[l]==s[r]){
                l--;r++;
            }
            if(maxlen<(r-l-1)){
                maxlen = r-l-1;
                ans = s.substr(l+1,(r-l-1));
            }
        }
        for(int i = 0;i<s.length()-1;i++){
            int l = i;
           // int r= i;
            int  r= i+1;
            while(l>=0&&r<n&&s[l]==s[r]){
                l--;r++;
            }
            if(maxlen<(r-l-1)){
                maxlen = r-l-1;
                ans = s.substr(l+1,(r-l-1));
            }
            
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
        cout << ob.longestPalindrome(S) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends