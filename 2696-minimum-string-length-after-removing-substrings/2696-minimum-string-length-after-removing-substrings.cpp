class Solution {
public:
    int minLength(string s) {
        int n = s.length();
        if (n == 0) {
            return 0;
        }
        stack<int> st;
        st.push(s[0]);
        for (int i = 1; i < n; i++) {
            if (!st.empty() && ((s[i] == 'B' && st.top() == 'A') ||
                                (s[i] == 'D' && st.top() == 'C'))) {
                st.pop();
                continue;
            }
            st.push(s[i]);
        }
        return st.size();
    }
};