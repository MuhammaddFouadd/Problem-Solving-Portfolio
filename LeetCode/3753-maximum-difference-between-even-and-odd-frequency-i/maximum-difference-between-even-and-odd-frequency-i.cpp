class Solution {
public:
    int maxDifference(string s) {
        unordered_map <char, int> freq;

        int len = s.size();
        for (int i = 0 ; i < len ; ++i){
            if (freq.find(s[i])==freq.end())
            {
                freq[s[i]]= 1;
                continue;
            }
            ++freq[s[i]];
        }

        int maxOdd {} , minEven=101;
        for (auto letter : freq){
            if (letter.second%2!=0)
                maxOdd= max(maxOdd,letter.second);
            else
                minEven= min(minEven,letter.second);

        }

        return maxOdd-minEven;
    }
};