class Solution {
public:
    int maxArea(vector<int>& height) {
        vector<pair<int, int>> v;
        int len = height.size();
        for (int i = 0; i < len; ++i) {
            v.push_back({i, height[i]});
        }

        int maxArea = -1;
        int i = 0, j = len - 1;

        while (i<j) {
            int area =
                min(v[i].second, v[j].second) *
                (max(v[j].first, v[i].first) - min(v[j].first, v[i].first));
            maxArea = max(maxArea, area);

            if (v[i].second < v[j].second)
                ++i;
            else
                --j;
        }

        return maxArea;
    }
};