class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for(int i = 0 ;i<strs[0].length();i++){
            char x = strs[0][i];
            int flag = 0;
            for(int j=0 ;j<strs.size();j++){
                if(strs[j][i]!=x){
                    flag = 1;
                    break;
                }
            }
            if(flag==0){
               ans +=strs[0][i];
            }
            else{
                break;
            }
        }
        return ans;
    }
};