
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> st;
        int ln = strs.size();

        for (int i = 0; i < ln; ++i) {
            string k = strs[i];
            sort(strs[i].begin(), strs[i].end());
            st[move(strs[i])].push_back(k);
        }

        vector<vector<string>> out;
        for (auto it : st) {
            out.push_back(move(it.second));
        }

        return out;
    }
};
