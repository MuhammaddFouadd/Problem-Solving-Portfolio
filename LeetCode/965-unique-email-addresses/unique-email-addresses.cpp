class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_map<string, bool> check;

        for (int i = 0; i < emails.size(); ++i) {
            int len = emails[i].find('@');
            string local{};
            for (int j = 0; j < len; ++j) {
                if (emails[i][j] == '.')
                    continue;
                else if (emails[i][j] == '+')
                    break;
                local += emails[i][j];
            }

            for (int j = len; j < emails[i].size(); ++j) {
                local += emails[i][j];
            }

            if (check.find(local) == check.end())
                check[local] = 1;
        }
        return check.size();
    }
};