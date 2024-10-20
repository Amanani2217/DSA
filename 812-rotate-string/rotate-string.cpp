class Solution {
public:
    bool rotateString(string s, string goal) {
        // for(int i = 0;i<s.length();i++){
        //     char temp = s[0];
        //     s.erase(0,1);
        //     s+=temp;
        //     if(s==goal)
        //       return true;
        // }
        // return false;






    int j = s.length();
    while(j>0){
        char temp = s[0];
        int i;
        for( i =0;i<s.length()-1;i++){
            s[i]=s[i+1];
        }
        s[i]=temp;
        if(s==goal)
          return true;
        j--;
    }
    return false;





    }
};