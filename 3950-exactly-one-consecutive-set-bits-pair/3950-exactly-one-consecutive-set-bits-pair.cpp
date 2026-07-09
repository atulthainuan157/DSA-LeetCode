class Solution {
public:
    bool consecutiveSetBits(int n) {
        int pairCount = 0;
        while (n != 0) {
            if ((n & 3) == 3) {
                pairCount++;
            }
            if (pairCount > 1) {
                return false;
            }
            n >>= 1;
        }
        return pairCount == 1;
    }
};