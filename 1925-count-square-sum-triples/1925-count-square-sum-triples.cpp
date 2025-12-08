class Solution {
public:
    int countTriples(int n) {
        int ans = 0;
        for (int a = 1; a <= n; a++) {
            for (int b = 1; b <= n; b++) {
                int cSqr = a * a + b * b;
                int c = sqrt(cSqr);
                if (cSqr == c * c && c <= n)
                    ans++;
            }
        }
        return ans;
    }
};