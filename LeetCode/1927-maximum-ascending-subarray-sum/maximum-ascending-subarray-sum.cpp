class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum{}, subSum = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i - 1] < nums[i])
                subSum += nums[i];
            else {
                sum = max(sum, subSum);
                subSum = nums[i];
            }
        }
        return max(sum, subSum);
    }
};