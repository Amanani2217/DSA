class Solution {
public:
    int maxDepth(string s) {
         stack<char>st;
       int len = 0;
       for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            st.push('(');
            len = len>st.size()?len:st.size();
            }
        else if(s[i]==')') st.pop();
       }
       return len; 
    }
};