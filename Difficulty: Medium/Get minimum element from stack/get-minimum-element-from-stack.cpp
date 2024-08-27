//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    int minEle;
    stack<int> s1;
    stack<int> s2;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           if(!s2.empty())
             return s2.top();
             return -1;
           //Write your code here
       }
       
       /*returns poped element from stack*/
       int pop(){
           if(!s1.empty()&&!s2.empty()){
           int x = s1.top();
           s1.pop();
           s2.pop();
           return x; 
           }
           return -1;
           //Write your code here
       }
       
       /*push element x into the stack*/
       void push(int x){
           s1.push(x);
           if(s2.empty())
              s2.push(x);
            else{
                if(x>s2.top())
                   s2.push(s2.top());
                else 
                    s2.push(x);
            }
           //Write your code here
       }
};

//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}

// } Driver Code Ends