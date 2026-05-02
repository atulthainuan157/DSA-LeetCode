class Solution {
public:
    bool isGood(int num, vector<int>& temp) {
        int num1 = num;
        int ans = 0;
        int place = 1;
        bool isChanged = false;
        while (num1 != 0) {
            int rem = num1 % 10;
            if (temp[rem] == -1) {
                return false;
            }
            ans = temp[rem] * place + ans;
            if (temp[rem] != rem) {
                isChanged = true;
            }
            place *= 10;
            num1 /= 10;
        }
        return isChanged;
    }

    int rotatedDigits(int n) {
        vector<int> temp = {0, 1, 5, -1, -1, 2, 9, -1, 8, 6};
        int goodNums = 0;
        for (int i = 2; i <= n; i++) {
            if (isGood(i, temp)) {
                goodNums++;
            }
        }
        return goodNums;
    }
};