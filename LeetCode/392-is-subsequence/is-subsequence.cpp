class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s == t || s.size()==0) {
            return true;
        }

        vector<pair<int, bool>> v(s.size(), make_pair(0, false));
        for (int i = 0; i < s.size(); ++i) {
            v[i].first = s[i];
        }

        for (int i = 0, j = 0; i < t.size() && j <s.size(); ++i) {
            if (t[i] == v[j].first) {
                v[j].second = true;
                ++j;
            }
        }

        for (int i = 0; i < s.size(); ++i) {
            if (!v[i].second)
                return false;
        }
        return true;
    }
};