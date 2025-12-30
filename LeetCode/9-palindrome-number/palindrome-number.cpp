class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0)
            return false;

        deque<int> deq;
        while (x) {
            deq.push_front(x % 10);
            x /= 10;
        }

        int i{}, y = deq.size() - 1;

        while (i <= y) {
            if (i == y)
                return true;

            if (deq[i++] != deq[y--])
                return false;
        }
        return true;
    }
};