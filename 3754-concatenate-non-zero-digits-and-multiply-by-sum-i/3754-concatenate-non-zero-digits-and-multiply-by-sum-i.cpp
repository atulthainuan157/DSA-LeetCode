class Solution {
public:
    long long sumAndMultiply(int n) {
        vector<int> digits;
        long long x = 0;
        long long sum = 0;
        while (n != 0) {
            int rem = n % 10;
            if (rem != 0) {
                digits.push_back(rem);
            }
            n /= 10;
        }
        reverse(digits.begin(), digits.end());
        for (int val : digits) {
            x = x * 10 + val;
            sum += val;
        }
        return x * sum;
    }
};