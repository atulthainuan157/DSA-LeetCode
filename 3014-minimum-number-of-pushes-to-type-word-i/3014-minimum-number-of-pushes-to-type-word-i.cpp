class Solution {
public:
    int minimumPushes(string word) {
        int size = word.length();
        int round = 1;
        int result = 0;
        while (size > 0) {
            int n = size;
            size -= 8;
            if (size <= 0) {
                return result + round * n;
            }
            result = result + round * 8;
            round++;
        }
        return -1;
    }
};