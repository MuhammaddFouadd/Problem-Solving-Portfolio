class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum{}, ans{};
        for (auto& num : nums) {
            if (num == 1)
                ++sum;
            else
                sum = 0;
            ans = max(ans, sum);
        }
        return ans;
    }
};