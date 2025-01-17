class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0 ;int r =0;
        int maxlength =0;
        int maxfreq = 0;
        int hash[26]={0};
        while(r<s.length()){
            hash[s[r]-'A']++;
            maxfreq=max(maxfreq,hash[s[r]-'A']);//map can store int value;
            while((r-l+1)-maxfreq>k){
                 hash[s[l]-'A']--;
                 maxfreq=0;
                 for(int i = 0;i<26;i++){
                    maxfreq=max(maxfreq,hash[i]);
                 }
                 l++;
            }
            maxlength = max(maxlength,(r-l+1));
            r++;
        }
        return  maxlength ;
    }
};