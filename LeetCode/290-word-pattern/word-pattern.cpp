class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> map;
        unordered_map<string, bool> unique;
        vector<string> words;


        string word{};
        for (int i = 0; i < s.size(); ++i) {
            if (i == s.size() - 1) {
                word += s[i];
                words.push_back(word);
            } else if (s[i] == ' ') {
                words.push_back(word);
                string temp{};
                word = temp;
            } else {
                word += s[i];
            }
        }

        if (pattern.size()!=words.size())
            return false;


        for (int i = 0; i < words.size(); ++i) {
            if (map.find(pattern[i]) == map.end()) {
                if (unique.find(words[i]) == unique.end()) {
                    map[pattern[i]] = words[i];
                    unique[words[i]] = 1;
                } else
                    return false;
                continue;
            }

            if (map[pattern[i]] != words[i])
                return false;
        }

        return true;
    };
};