class Solution {
public:
    int kthFactor(int n, int k) {
        int num = 0;
        for (int i = 1; i <= n/2; i++) {
            if (n % i == 0) {
                num++;
            }
            if (k == num) {
                return i;
            }
        }
        if(k==num+1) {
            return n;
        }
        return -1;
    }
};