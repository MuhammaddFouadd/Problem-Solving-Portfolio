class Solution {
public:
    vector<vector<int>> ans;
    vector<int> itr;

    void subsets(vector<int>& nums, int i) {
        ans.push_back(itr);

        for (int j = i; j < nums.size(); ++j) {
            itr.push_back(nums[j]);
            subsets(nums, j + 1);
            itr.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        subsets(nums, 0);
        return ans;
    }
};