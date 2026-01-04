class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int, bool> m;
        int len = nums.size();

        for (int i = 0; i < len; ++i) {
            if (m[nums[i]])
                return nums[i];
            m[nums[i]] = 1;
        }
        return 0 ;
    }
};