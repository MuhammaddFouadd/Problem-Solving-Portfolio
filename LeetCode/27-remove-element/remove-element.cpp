class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt{};

        for (size_t i = 0; i < nums.size(); i++) {
            if (val != nums[i])
                ++cnt;
            
        }

        for (int i = 0; i < cnt; i++) {
            if (val == nums[i]) {
                nums.erase(nums.begin() + i);
                --i;
            }
        }

        return cnt;
    }
};