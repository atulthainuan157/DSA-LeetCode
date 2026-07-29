class Solution {
public:
    int largestInteger(int n, int s) {
        if (s == 0) {
            return 0;
        }
        if (s > n * 9) {
            return -1;
        }
        int result = 0;
        for (int i = 0; i < n; i++) {
            int digit = min(9, s);
            result = result * 10 + digit;
            s -= digit;
        }
        return result;
    }
};