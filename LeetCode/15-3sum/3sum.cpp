class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> v;

        for (int i = 0; i < nums.size(); ++i) {
            if (i && nums[i]==nums[i-1])
                continue; 
            else if (nums[i]>0)
                break;
                
            int st = i+1, en = nums.size() - 1;
            while (st < en) {
                if (st == i) {
                    ++st;
                    continue;
                } else if (en == i) {
                    --en;
                    continue;
                }

                if (nums[i] + nums[st] + nums[en] > 0) {
                    --en;
                } else if (nums[i] + nums[st] + nums[en] < 0) {
                    ++st;
                } else {
                    v.push_back({nums[i], nums[st], nums[en]});
                    ++st, --en;
                }
            }
        }

        for (int i = 0; i < v.size(); ++i) {
            sort(v[i].begin(), v[i].end());
        }
        sort(v.begin(), v.end());
        auto last = unique(v.begin(), v.end());
        v.erase(last, v.end());

        return v;
    }
};