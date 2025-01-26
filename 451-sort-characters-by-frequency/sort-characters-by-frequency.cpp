class Solution {
public:
    static bool sortByValue(const pair<char, int>& a, const pair<char, int>& b) {
        return a.second > b.second; // Descending order
    }

    string frequencySort(string s) {
        map<char, int> m;
        for (int i = 0; i < s.length(); i++) {
            m[s[i]]++;
        }

        vector<pair<char, int>> v(m.begin(), m.end());
        sort(v.begin(), v.end(), sortByValue);

        string ans = "";
        for (auto it : v) {
            int x = it.second;
            while (x--) {
                ans += it.first;
            }
        }
        return ans;
    }
};
