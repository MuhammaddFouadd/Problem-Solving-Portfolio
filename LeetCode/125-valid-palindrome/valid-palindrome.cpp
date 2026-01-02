class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;

        while (start <= end) {
            if (!((s[start] >= '0' && s[start] <= '9') ||
                  (s[start] >= 'A' && s[start] <= 'Z') ||
                  (s[start] >= 'a' && s[start] <= 'z'))) {
                start++;
                continue;
            }

            if (!((s[end] >= '0' && s[end] <= '9') ||
                  (s[end] >= 'A' && s[end] <= 'Z') ||
                  (s[end] >= 'a' && s[end] <= 'z'))) {
                end--;
                continue;
            }

            char ch1 = s[start];
            char ch2 = s[end];

            if (ch1 >= 'A' && ch1 <= 'Z')
                ch1 += 32;
            if (ch2 >= 'A' && ch2 <= 'Z')
                ch2 += 32;

            if (ch1 != ch2)
                return false;

            start++;
            end--;
        }
        return true;
    }
};
