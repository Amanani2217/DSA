class Solution {
public:
    bool isAnagram(string s, string t) {
        // map<char,int>m;
        // if(s.length()!=t.length())
        //   return false;
        // for(int i = 0 ;i<s.length();i++){
        //     m[s[i]]++;
        // }
        // for(int i =0 ;i<t.length();i++){
        //     if(m[t[i]]==0)
        //        return false;
        //     else
        //        m[t[i]]--;
        // }
        // return true;




    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t)return true;return false;








return true;



    }
};