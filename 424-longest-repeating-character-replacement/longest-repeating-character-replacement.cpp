class Solution {
public:
    int characterReplacement(string s, int k) {
        int l =0;int r =0;
        int n = s.length();
        map<char,int>m;
        int maxf =0;
        int ans = 0;
        while(r<n){
            m[s[r]]++;
            maxf = max(maxf,m[s[r]]);
            if((r-l+1)-maxf > k){
                m[s[l]]--;
                l++;
            }
            ans = max(ans,(r-l+1));
            r++;
        }
        return ans;
    }
};