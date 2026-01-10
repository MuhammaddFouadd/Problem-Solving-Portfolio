class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector <int> firstGreat;
        vector<int> ans;
        int len1 = nums1.size(), len2 = nums2.size();

        for (int i = 0; i < len2; ++i) {
            int first =-1;
            for (int j = i+1; j < len2; ++j) {
                if(nums2[j]>nums2[i])
                {
                    first=nums2[j];
                    break;
                }
            }
            firstGreat.push_back(first);
        }

        for (int i = 0; i < len1; ++i) {
            int nextGreater = -1;
            for (int j = 0; j < len2-1; ++j) {
                if (nums1[i] == nums2[j]) {
                    nextGreater = firstGreat[j];
                }
            }
            ans.push_back(nextGreater);
        }
        return ans;
    }
};