class Solution {
    vector<pair<int, int>> ref;
    void bld(vector<int>& nums, int k) {
        vector<int> preSum(nums.size() + 1);
        preSum[0] = 0;
        for (int i = 0; i < nums.size(); ++i) {
            preSum[i + 1] = (preSum[i] + nums[i]) % k;
        }

        for (int i = 0; i < preSum.size(); ++i) {
            ref.push_back({preSum[i], i});
        }
        sort(ref.begin(), ref.end());
    }

public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        bld(nums, k);
        int mxi{}, mni = 1e9;
        for (int i = 1; i < ref.size(); ++i) {
            cout << i << " ref " << ref[i - 1].first << " " << ref[i - 1].second
                 << "\n";
            if (ref[i].first == ref[i - 1].first) {
                mxi = max(mxi, max(ref[i].second, ref[i - 1].second));
                mni = min(mni, min(ref[i].second, ref[i - 1].second));
                cout << mxi << " " << mni << "\n";
            } else {

                mxi=0, mni = 1e9;
            }
            if (mxi - mni > 1)
                return true;
        }
        cout << ref[ref.size() - 1].first << " " << ref[ref.size() - 1].second
             << "\n";
        return false;
    }
};