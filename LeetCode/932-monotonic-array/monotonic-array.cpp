class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int len = nums.size();

        if (len < 3)
            return true;

        bool isIncreasing = 1;
        for (int i = 1; i < len; ++i) {
            if (nums[i - 1] != nums[i]) {
                if (nums[i - 1] > nums[i])
                    isIncreasing = 0;

                break;
            }
        }

        if (isIncreasing) {
            for (int i = 2; i < len; ++i) {
                if (nums[i - 1] > nums[i])
                    return false;
            }
        } else {
            for (int i = 2; i < len; ++i) {
                if (nums[i - 1] < nums[i])
                    return false;
            }
        }

        return true;
    }
};