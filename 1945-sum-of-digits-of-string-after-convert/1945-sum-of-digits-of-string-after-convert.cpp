class Solution {
public:
    int digitSum(int n) {
        int sum = 0;
        while (n != 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int getLucky(string s, int k) {
        string temp = "";
        for (char ch : s) {
            int n = ch + 1 - 'a';
            while (n != 0) {
                temp += to_string(n % 10);
                n /= 10;
            }
        }
        long long result = 0;
        for (char ch : temp) {
            result += ch - '0';
        }
        for (int i = 1; i < k; i++) {
            result = digitSum(result);
        }
        return result;
    }
};