class Solution {
public:
    char processStr(string s, long long k) {
        int n = s.size();
        vector<long long> len(n);
        long long currLength = 0;

        for (int i = 0; i < n; i++) {
            char ch = s[i];

            if (ch == '*') {
                if (currLength > 0) {
                    currLength--;
                }
            } else if (ch == '#') {
                currLength *= 2;
            } else if (ch == '%') {
                currLength = currLength;
            } else {
                currLength++;
            }
            len[i] = currLength;
        }

        if (k >= currLength) {
            return '.';
        }

        for (int i = n - 1; i >= 0; i--) {
            int ch = s[i];
            long long currLength = len[i];
            long long prevLength = (i == 0 ? 0 : len[i - 1]);

            if (ch == '*') {
                k = k;
            } else if (ch == '#') {
                if (prevLength > 0) {
                    k %= prevLength;
                }
            } else if (ch == '%') {
                k = currLength - 1 - k;
            } else {
                if (k == currLength - 1) {
                    return ch;
                }
            }
        }
        return '.';
    }
};