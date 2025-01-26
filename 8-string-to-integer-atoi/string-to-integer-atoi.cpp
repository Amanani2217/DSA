class Solution {
public:
    int myAtoi(string s) {
        double sum =0;
        int sign = 1;
        int i =0 ;
        int n = s.length();
         while(i<n && s[i]==' '){
                i++;
            }
            if(s[i]=='-'){
                i++;
                sign = -1;
            }
            else if(s[i]=='+'){
                i++;
                sign = 1;
            }
        for(;i<s.length();i++){
             if(s[i]>='0'&&s[i]<='9'){
                 sum= sum*10 + (s[i]-'0');
            }else break;
        }
        if(sign==-1) sum =sum*-1;
        if(sum<INT_MIN)return INT_MIN;
        if(sum>INT_MAX)return INT_MAX;
        return sum;
    }
};