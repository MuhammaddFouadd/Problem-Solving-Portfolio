class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int last = digits.size() - 1;

        while (last >= 0) {
            if (digits[last] < 9) {
                digits[last]++;
                return digits;
            }

            digits[last] = 0;
            last--;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};