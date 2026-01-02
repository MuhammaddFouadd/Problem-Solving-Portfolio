class Solution {
public:
    bool isPalindrome(string s) {
        int i{}, j = s.size() - 1;
        bool isPal = 1;

        while (i < j + 1) {
            if (s[i] >= '0' && s[i] <= '9') {
                ++i;
                continue;
            }

            if ((!(s[i] >= 'A' && s[i] <= 'Z') &&
                     !(s[i] >= 'a' && (s[i] <= 'z')) ||
                 (s[i] == ' '))) {
                s.erase(s.begin() + i);
                --j;
                continue;
            }
            ++i;
        }

        i = 0, j = s.size() - 1;
        while (i < j) {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] += ('a' - 'A');

            if (s[j] >= 'A' && s[j] <= 'Z')
                s[j] += ('a' - 'A');

            if (s[i++] != s[j--]) {
                isPal = 0;
                break;
            }
        }

        return isPal;
    }
};