class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char, bool> m;
        for (int i = 0; i < allowed.size(); ++i) {
            m[allowed[i]] = 1;
        }

        int cnt {};
        for (int i = 0; i < words.size(); ++i) {
            bool consis = 1;
            for (int j = 0; j < words[i].size(); ++j) {
                if (m.find(words[i][j]) == m.end())
                {
                    consis =0;
                    break;
                }
            }
            if (consis)
                ++cnt;
        }

        return cnt;
    }
};