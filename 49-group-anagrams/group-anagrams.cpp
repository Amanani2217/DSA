class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> temp = strs;
        vector<vector<string>>ans;
        map<string,int>m;
        for(int i = 0;i<temp.size();i++){
            sort(temp[i].begin(),temp[i].end());
        }
        for(int i=0;i<temp.size();i++)
        {   
            if(m.find(temp[i])!=m.end())
               continue;
            else
               m[temp[i]]++;   
            vector<string>t;
            t.push_back(strs[i]);
            for(int j = i+1;j<temp.size();j++){
                if(temp[i]==temp[j]){
                  t.push_back(strs[j]);
                }
            }
            ans.push_back(t);
        }
        return ans;
    }
};