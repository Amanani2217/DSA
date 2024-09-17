//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sentencePalindrome(string s) 
	{
	    // code here 
	    int i = 0;int r  = s.length()-1;
	    while(i<r){
	        while(s[i]<='a'||s[i]>='z')
	          i++;
	        while(s[r]<='a'||s[r]>='z')
	          r--;
	        if(i<r&&s[i]!=s[r])
	         return false;
	        i++;r--; 
	    }
	    return true;
	}
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution ob;
        cout<<ob.sentencePalindrome(str)<<endl;
    }
    return 0;
}  


// } Driver Code Ends