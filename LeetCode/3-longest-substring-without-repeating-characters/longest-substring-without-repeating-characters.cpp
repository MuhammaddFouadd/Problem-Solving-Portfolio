class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> m;
        int longest = 0;

        for (int i = 0; i < s.size(); ++i) {
            if (m.find(s[i]) != m.end()) {
                i = m[s[i]]+1;
                m.clear();
            }
            m[s[i]] = i;
            int sz = m.size();
            longest = max(longest, sz);
        }
        return longest;
    }
};