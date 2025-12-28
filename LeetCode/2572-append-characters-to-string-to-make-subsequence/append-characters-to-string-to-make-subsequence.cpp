class Solution {
public:
    int appendCharacters(string s, string t) {

        vector<pair<int, bool>> v(t.size(), make_pair(-1, 0));

        for (int i = 0; i < t.size(); ++i) {
            v[i].first = t[i];
        }

        for (int i = 0, j = 0; i < s.size() && j < t.size(); ++i) {
            if (s[i] == v[j].first) {
                v[j].second = true;
                ++j;
            }
        }

        int cnt = 0, temp = 0;

        for (int i = 0, j = i; i < v.size(); ++i) {

            while (j < v.size() && v[j].second) {
                ++j;
                ++temp;
            }
            cnt = max(cnt, temp);
        }

        return t.size() - cnt;
    }
};