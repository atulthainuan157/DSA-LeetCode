class Solution {
public:
    bool isEvenDigit(int n) {
        int digit = 0;
        while (n != 0) {
            digit++;
            n /= 10;
        }
        return !(digit & 1);
    }

    int findNumbers(vector<int>& nums) {
        int result = 0;
        for (int val : nums) {
            if (isEvenDigit(val)) {
                result++;
            }
        }
        return result;
    }
};