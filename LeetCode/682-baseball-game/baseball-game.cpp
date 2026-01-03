class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        int len = operations.size(), sum = 0;
        ;
        for (int i = 0; i < len; ++i) {
            if (operations[i] == "C") {
                sum -= s.top();
                s.pop();
            }

            else if (operations[i] == "D") {
                {
                    s.push(2 * s.top());
                    sum += s.top();
                }
            } else if (operations[i] == "+") {
                int last = s.top();
                s.pop();
                int before = s.top();
                s.push(last);

                s.push(last + before);
                sum += s.top();
            } else {
                s.push(stoi(operations[i]));
                sum += s.top();
            }
        }

        return sum;
    }
};