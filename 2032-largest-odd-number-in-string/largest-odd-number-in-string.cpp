class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";int i ;
        for(i=num.length()-1;i>=0;i--){
            if((num[i]-'0')%2!=0){
                break;
            }
        }
        for(int j =0;j<=i;j++){
            ans+=num[j];
        }
        return ans;
    }
};