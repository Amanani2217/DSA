//{ Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int evaluatePostfix(string s)
    {
        // Your code here
        stack<int>st;
        for(int i =0 ;i<s.length();i++){
            if(s[i]>='0'&&s[i]<='9'){
                st.push(s[i]-'0');
            }
               
            else{
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int t;
                switch (s[i]){
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

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends