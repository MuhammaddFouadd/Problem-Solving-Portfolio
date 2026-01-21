class Solution {
public:
    int maxScore(string s) {
        int score{}, len = s.size();
        
        for (int i = 0; i < len-1; ++i) {
            int zero{}, one{};
            for (int left = i; left > -1; --left) {
                if (s[left]=='0')
                    ++zero;
            }
            for (int right = i + 1; right < len; ++right) {
                if (s[right]=='1')
                    ++one;
            }
            score = max(score, (zero + one));
        }

        return score;
    }
};