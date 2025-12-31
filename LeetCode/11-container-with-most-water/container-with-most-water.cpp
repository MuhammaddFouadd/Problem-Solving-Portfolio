class Solution {
public:
    int maxArea(vector<int>& height) {

        int maxArea = -1;
        int i = 0, j = height.size() - 1;

        while (i<j) {
            int area = min(height[i], height[j]) * (j-i);
            maxArea = max(maxArea, area);

            if (height[i] < height[j])
                ++i;
            else
                --j;
        }
        return maxArea;
    }
};