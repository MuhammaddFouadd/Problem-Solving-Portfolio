class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int len = s.size();

        if (len == 1)
            return false;

        st.push(s[0]);
        for (int i = 1; i < len; ++i) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else if (!st.empty() && st.top() == '(' && s[i] == ')' ||
                     !st.empty() && st.top() == '{' && s[i] == '}' ||
                     !st.empty() && st.top() == '[' && s[i] == ']') {
                st.pop();
            } else {
                return false;
            }
        }
        return st.empty();
    }
};