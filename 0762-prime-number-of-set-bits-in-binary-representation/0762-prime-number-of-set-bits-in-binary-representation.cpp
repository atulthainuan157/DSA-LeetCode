class Solution {
public:
    int countbits(int n) {
        int count = 0;
        while (n > 0) {
            count += (n & 1);
            n >>= 1;
        }
        return count;
    }

    bool bitPrime(int bits) {
        if (bits <= 1)
            return false;
        for (int i = 2; i <= sqrt(bits); i++) {
            if (bits % i == 0) {
                return false;
            }
        }
        return true;
    }

    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for (int i = left; i <= right; i++) {
            int bits = countbits(i);
            if (bitPrime(bits)) {
                ans++;
            }
        }
        return ans;
    }
};