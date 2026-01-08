class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.size() , cnt{};
        bool lastLetter = 0 ;
        for (int i = len - 1; i >= 0; --i) {
            if (lastLetter)
                return cnt;

            if (s[i] != ' ') {
                ++cnt;
                if (i>0 && s[i - 1] == ' ')
                    lastLetter = 1;
            }
        }
        return cnt;
    }
};