class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;
        for (int i = 0; i < nums.size(); ++i) {
            if (m.find(nums[i]) == m.end()) {
                m[nums[i]] = 1;
                continue;
            }
            ++m[nums[i]];
        }

        vector<int> maxs;
        while (k--) {
            pair<int, int> max{-1e5, 0};
            for (auto[f, s] : m) {
                if (s > max.second) {
                    max.second = s;
                    max.first = f;
                }
            }
            maxs.push_back(max.first);
            m[max.first] = 0;
        }

        return maxs;
    };
};