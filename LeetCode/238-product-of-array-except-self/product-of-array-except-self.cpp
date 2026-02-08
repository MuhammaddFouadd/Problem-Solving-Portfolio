class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1, zeros = 0;
        bool zero = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i]) {
                product *= nums[i];
            } else {
                zero = 1;
                zeros++;
            }
        }

        if (zeros == nums.size()) {
            return nums;
        } else if (zeros > 1) {
            product = 0;
        }

        vector<int> ans(nums.size());
        for (int i = 0; i < nums.size(); ++i) {

            if (zero) {
                if (nums[i]) {
                    ans[i] = 0;
                } else {
                    ans[i] = product;
                }
            } else {
                ans[i] = product / nums[i];
            }
        }

        return ans;
    }
};