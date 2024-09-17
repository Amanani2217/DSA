//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    // your code here
    map<char,int>m;int i =0 ;int maxe=0;
    for(int j = 0;j<S.length();j++){
        if(m[S[j]]==0){
             m[S[j]]=j+1;
            
        }
        else if(m[S[j]]>i){
            i = m[S[j]];
            m[S[j]]=j+1;
        }else{
            m[S[j]]=j+1;
        }
          
        maxe = max(maxe,j-i+1);
    }
    return maxe;
}