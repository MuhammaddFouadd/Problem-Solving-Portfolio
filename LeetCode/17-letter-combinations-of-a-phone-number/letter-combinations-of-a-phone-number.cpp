class Solution {
public:
    vector<string> ans;
    string s{};
    map<char, vector<char>> m;

    vector<string> letterCombinations(string digits, int index) {

        if (index == digits.size()) {
            if (!s.empty())
                ans.push_back(s);

            return ans;
        }

        for (auto it : m[digits[index]]) {
            s += it;
            letterCombinations(digits, index + 1);
            s.pop_back();
        }

        return ans;
    }

    vector<string> letterCombinations(string digits) {
        m['2'] = {'a', 'b', 'c'};
        m['3'] = {'d', 'e', 'f'};
        m['4'] = {'g', 'h', 'i'};
        m['5'] = {'j', 'k', 'l'};
        m['6'] = {'m', 'n', 'o'};
        m['7'] = {'p', 'q', 'r', 's'};
        m['8'] = {'t', 'u', 'v'};
        m['9'] = {'w', 'x', 'y', 'z'};

        return letterCombinations(digits, 0);
    }
};