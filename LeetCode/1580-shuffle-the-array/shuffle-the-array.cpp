class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> out;
        for (int i = 0 , j = nums.size() / 2; i < nums.size() / 2; i++ , j++) {
            out.push_back(nums[i]);
            out.push_back(nums[j]);
        }
        
        return out;
    }
};
