class Solution {
public:
   void reverse(int i , int j , string &nstr ){
    while(i<=j){
        char t= nstr[i];
        nstr[i]=nstr[j];
        nstr[j]=t;
        i++;j--;
    }
   }
    string reverseWords(string s) {
        int i = 0 ;
        string nstr="";
        while(s[i]==' '){
           i++;
        }
        s.erase(0,i);

        i=s.length()-1;
        while(s[i]==' '){
            i--;
        }
        s.erase(i+1,s.length());
          

          //to remove the space in bw from the string;
          for (int i = 0;i<s.length(); i++){
            if(s[i]==' '){
                    while(s[i+1]==' '){
                        i++;
                    }
            }
            nstr+=s[i];
          }
       
       //add space so that till the last it will to go to reverse;
        nstr+=' ';
        for(int i =0 ;i<nstr.length();i++){
            int j = i;
            while(nstr[j]!=' '){
               
               j++;
            }
            reverse(i,j-1,nstr);
            i=j;
        }
        reverse(0,nstr.length()-1,nstr);
        nstr.erase(0,1);
        return nstr;
       
    }
};