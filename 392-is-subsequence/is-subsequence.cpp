class Solution {
public:
    bool isSubsequence(string s, string t) {
         int j = 0;
       for(int i =0;i<s.length();i++){
          while(j<t.length()&&t[j]!=s[i]){
             j++;
        }
        if(j>=t.length())
          return false;
        j++;
       }
       return true;
    }
};