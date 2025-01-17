class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //pick eat then sort and map it with correspondin string in to vector
        map<string,vector<string>>m;
        for(auto c:strs){
            string temp = c;
            sort(temp.begin(),temp.end());
            m[temp].push_back(c);
        }
        vector<vector<string>>res;
        for(auto p:m){
            res.push_back(p.second);
        }
        return res;
    }
};