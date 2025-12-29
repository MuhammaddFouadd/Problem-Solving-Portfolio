class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        int l = 300;

        for (int i = 0; i < strs.size(); ++i) {
            int n = strs[i].size();
            l = min(l, n);
        }

        int lastIdx = -1;
        bool isSame = 1;
        for (int i = 0; i < l; ++i) {
            for (int j = 1; j < strs.size(); ++j) {
                if (strs[j - 1][i] != strs[j][i]) {
                    lastIdx = i - 1;
                    isSame = 0;
                    break;
                }
            }

            if (!isSame)
                break;
        }

        if (isSame) {
            for (size_t i = 0; i < l; i++) {
                s += strs[0][i];
            }
        } else {
            for (size_t i = 0; i < lastIdx + 1; i++) {
                s += strs[0][i];
            }
        }

        return s;
    }
};