class Solution {
public:
    bool hasAlternatingBits(int n) {
        int num = n;
        string str = "";
        while (num != 0) {
            int rem = num % 2;
            str += to_string(rem);
            num /= 2;
        }
        for (int i = 1; i < str.length(); i++) {
            if (str[i] == str[i - 1]) {
                return false;
            }
        }
        return true;
    }
};