
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if (nums.size() < 3)
            return {0,1};

        map<int, int> m;
        for (int i = 0; i < nums.size(); ++i) {
            m.insert({nums[i], i});
        }

        vector<int> v(2, 0);

        for (int i = 0; i < nums.size(); ++i) {
            auto it1 = m.find(target - nums[i]);

            if (it1 != m.end() && (i != m[target - nums[i]])) {
                v[0] = i;
                v[1] = m[target - nums[i]];
                break;
            }
        }
        return v;
    }
};