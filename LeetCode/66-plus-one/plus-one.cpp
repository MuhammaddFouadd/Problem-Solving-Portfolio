class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int last = digits.size() - 1;
        bool isDone = 0;

        while (!isDone) {
            if (last < 0) {
                digits.insert(digits.begin(), 1);
                return digits;
            }
            if (digits[last] < 9) {

                ++digits[last--];
                isDone = !isDone;
            } else if (digits[last] == 9) {
                digits[last--] = 0;
            }
        }
        return digits;
    }
};