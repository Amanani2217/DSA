//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
      // put the commutative sum in to the map and check if the 
      // commutative sum - k exitst in map it means we find the length k
      int len = 0;
      int sum = 0;
      int n= arr.size();
      map<int,int>m;
      for(int i =0 ;i<n;i++){
          sum+=arr[i];
          if(sum==k)
            len=max(len,i+1);
          if(m.find(sum-k)!=m.end()){
              len = max(len,(i-m[(sum-k)]));
          }
          if(m.find(sum)==m.end())
            m[sum] = i;
      }
      return len;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.longestSubarray(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends