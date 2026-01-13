class Solution {
public:
    map<string, int> m;
    int ans{};
    int romanToInt(string s) {
        m["I"] = 1;
        m["IV"] = 4;
        m["V"] = 5;
        m["IX"] = 9;
        m["X"] = 10;
        m["XL"] = 40;
        m["L"] = 50;
        m["XC"] = 90;
        m["C"] = 100;
        m["CD"] = 400;
        m["D"] = 500;
        m["CM"] = 900;
        m["M"] = 1000;

        int len = s.size();
        for (auto i = 0; i < len; ++i) {
            string temp {};
            temp += s[i];
            if (i < len - 1 && m.find(temp + s[i + 1]) != m.end()) {
                temp += s[i + 1];
                ++i;
            }

            ans += (m[temp]);
        }
        return ans;
    }
};