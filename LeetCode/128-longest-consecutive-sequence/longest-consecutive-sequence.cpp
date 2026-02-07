class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;

        if (!nums.size())
            return 0;

        for (auto it : nums) {
            s.insert(it);
        }

        vector<int> v;
        for (auto e : s) {
            v.push_back(e);
        }

        int longest = 1, sub = 1;
        for (int i = 1; i < v.size(); ++i) {
            if (v[i] == v[i - 1] + 1) {
                ++sub;
                longest = max(longest, sub);
            } else {
                sub = 1;
            }
        }

        return longest;
    };
};