class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> freq1, freq2;
        int len1 = ransomNote.size(), len2 = magazine.size();

        for (int i = 0; i < len1; ++i) {
            if (freq1.find(ransomNote[i]) == freq1.end()) {
                freq1[ransomNote[i]] = 1;
                continue;
            }
            ++freq1[ransomNote[i]];
        }

        for (int i = 0; i < len2; ++i) {
            if (freq2.find(magazine[i]) == freq2.end()) {
                freq2[magazine[i]] = 1;
                continue;
            }
            ++freq2[magazine[i]];
        }

        bool isSubstr = 1;
        for (int i = 0; i < len1; ++i) {
            if (freq1[ransomNote[i]] > freq2[ransomNote[i]]) {
                isSubstr = 0;
                break;
            }
        }

        return isSubstr;
    }
};