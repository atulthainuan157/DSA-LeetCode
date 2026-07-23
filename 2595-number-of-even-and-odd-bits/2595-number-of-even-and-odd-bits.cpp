class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even = 0, odd = 0;
        int index = 0;
        while (n) {
            if (n & 1) {
                if (index & 1) {
                    odd++;
                }
                else {
                    even++;
                }
            }
            index++;
            n >>= 1;
        }
        return {even, odd};
    }
};