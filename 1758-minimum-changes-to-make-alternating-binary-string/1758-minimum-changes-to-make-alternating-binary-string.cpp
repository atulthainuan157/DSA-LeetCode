class Solution {
public:
    int minOperations(string s) {
        int st1 = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i % 2 == 0) {
                if (s[i] == '0') {
                    st1++;
                }
            } else {
                if (s[i] == '1') {
                    st1++;
                }
            }
        }
        return min(st1, int(s.length() - st1));
    }
};