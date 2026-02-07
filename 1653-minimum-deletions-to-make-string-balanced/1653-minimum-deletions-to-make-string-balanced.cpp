class Solution {
public:
    int minimumDeletions(string s) {
        int b = 0;
        int flips = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'b') {
                b++;
            } else {
                if (b > 0) {
                    flips++;
                    flips = min(flips, b);
                }
            }
        }
        return flips;
    }
};