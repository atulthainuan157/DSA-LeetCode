class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int ones = 0;
        int flips = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                ones++;
            } else {
                if (ones > 0) {
                    flips++;
                    flips = min(flips, ones);
                }
            }
        }
        return flips;
    }
};