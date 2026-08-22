class Solution {
public:
    vector<long long> digits(int n) {
        long long sum = 0;
        long long product = 1;
        while (n != 0) {
            int rem = n % 10;
            sum += rem;
            product *= rem;
            n /= 10;
        }
        return {sum, product};
    }

    bool checkDivisibility(int n) {
        vector<long long> ans = digits(n);
        return n % (ans[0] + ans[1]) == 0;
    }
};