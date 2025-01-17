class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<int,int>m;
        int l = 0;
        int r = 0;
        int ans = 0;
        int n = s.length();
        while(r<s.length()){
            if(m.find(s[r])==m.end()) 
                m[s[r]]=r;
            else if(l<=m[s[r]])
               l=m[s[r]]+1;
            m[s[r]] = r;
            ans = max(ans,(r-l+1));
            r++;    
        }
        return ans;
    }
};