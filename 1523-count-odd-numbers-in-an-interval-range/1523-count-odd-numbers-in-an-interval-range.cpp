class Solution {
public:
    int countOdds(int low, int high) {
        int oddNum = 0;
        while (low <= high) {
            if (low % 2 != 0)
                oddNum++;
                low++;
        }
        return oddNum;
    }
};