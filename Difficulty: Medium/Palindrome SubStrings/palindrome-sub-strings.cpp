//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


// User function Template for C++

class Solution {
  public:
    int countPS(string &s) {
        // code here
        int ans = 0;
        int n = s.length();
        for(int i =0 ;i<n;i++){
            int l = i;
            int r = i;
            while(l>=0&&r<n&&s[l]==s[r]){
                if((r-l+1)>1)
                  ans++;
                l--;
                r++;
            }
        }
        for(int i =0;i<n-1;i++){
            int l = i;
            int r = i+1;
            while(l>=0&&r<n&&s[l]==s[r]){
                if((r-l+1)>1)
                  ans++;
                l--;
                r++;
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
        string s;
        cin >> s;
        Solution ob;
        cout << ob.countPS(s) << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends