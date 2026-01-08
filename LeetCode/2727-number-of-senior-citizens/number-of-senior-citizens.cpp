class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt{}, len = details.size();

        for (int i = 0; i < len; ++i) {
            if (details[i][11] > '6' || (details[i][11] == '6' && details[i][12] > '0'))
                ++cnt;
        }
        return cnt;
    }
};