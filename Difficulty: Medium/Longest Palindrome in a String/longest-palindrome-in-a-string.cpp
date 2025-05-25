class Solution {
  public:
    string longestPalindrome(string &s) {
        // code here
        int maxLength = 0;
        int start = 0;
        for(int i =0 ;i<s.length();i++){
            int twoTime = 2;// even length palindrome two center and 
            // odd length palindrome only one center;
            while(twoTime--){
                int low = i;
                int high = i+twoTime;
                while(low>=0 && high < s.length() && s[low]==s[high]){
                    int currentLength = high-low+1;
                    if(currentLength>maxLength){
                        maxLength= currentLength;
                        start = low;
                    }
                    low--;
                    high++;
                }
            }
        }
        return s.substr(start,maxLength);
    }
};