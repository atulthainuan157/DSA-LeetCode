class Solution {
public:
    int minLength(string s) {
        int n = s.length();
        int i = 0;
        while (i < n) {
            int change = 0;
            for (int i = 0; i < n - 1; i++) {
                if ((s[i] == 'A' && s[i + 1] == 'B') ||
                    (s[i] == 'C' && s[i + 1] == 'D')) {
                    s.erase(i, 2);
                    change++;
                }
            }
            if (change == 0) {
                break;
            }
        }
        return s.length();
    }
};