//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User template code in C++


    //User function template for C++
class Solution{
public:	
	bool sentencePalindrome(string s) 
	{
	    // code here 
	    string temp="";
	    for(int i= 0;i<s.length();i++){
	        if(s[i]>='A'&&s[i]<='Z' || s[i]>='a'&&s[i]<='z'){
	           temp.push_back(tolower(s[i]));
	        }
	         else if(s[i]>='0'&&s[i]<='9')
	           temp.push_back(s[i]);
	    }
	    int i = 0;int r  = temp.length()-1;
	    while(i<r){
	        if(temp[i]!=temp[r])
	         return false;
	        i++;r--; 
	    }
	    return true;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        if (ob.sentencePalindrome(s))
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}

// } Driver Code Ends