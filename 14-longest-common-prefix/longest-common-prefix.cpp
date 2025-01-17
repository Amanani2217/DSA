class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        sort(strs.begin(),strs.end());
        string first = strs.front();
        string last = strs.back();
        int i =0 ;int length = min(first.length(),last.length());
        while(i<length){
            if(first[i]==last[i]){
                i++;
            }
            else break;
        }
        ans = first.substr(0,i);
        return ans;
    }
};