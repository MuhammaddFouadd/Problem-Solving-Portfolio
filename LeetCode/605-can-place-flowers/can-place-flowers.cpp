class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int cnt = n;
        if (flowerbed.size() == 1) {
            if (!flowerbed[0])
                return n <= 1 ? 1 : 0;
            if (flowerbed[0] && !n)
                return 1;
            return 0;
        }

        for (int i = 0; i < flowerbed.size(); i += 1) {
            if (i == 0) {
                if (flowerbed[i] == 0 && flowerbed[i + 1] == 0) {
                    flowerbed[i] = 1;
                    --cnt;
                }
            } else if (i == flowerbed.size() - 1) {
                if (flowerbed[i] == 0 && flowerbed[i - 1] == 0) {
                    flowerbed[i] = 1;
                    --cnt; 
                }
            } else if (flowerbed[i] == 0 && flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0) {
                flowerbed[i] = 1;
                --cnt;
            }
        }

        if (cnt <= 0)
            return true;
        return false;
    }
};