class Solution {
public:
    bool isEqual(int n) {
        int digitSum = 0;
        while (n != 0) {
            digitSum += (n % 10);
            n /= 10;
        }
        return !(digitSum & 1);
    }

    int countEven(int num) {
        int count = 0;
        for (int i = 2; i <= num; i++) {
            if (isEqual(i)) {
                count++;
            }
        }
        return count;
    }
};