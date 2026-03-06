class Solution {
public:
    bool checkOnesSegment(string s) {
        bool isZero = false;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '0') {
                isZero = true;
            } else if (isZero) {
                return false;
            }
        }
        return true;
    }
};