class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        if (s1 == s2) {
            return true;
        }
        for (int i = 0; i < 2; i++) {
            if (s1[i] == s2[i]) {
                continue;
            } else {
                swap(s1[i], s1[i + 2]);
                if (s1[i] == s2[i]) {
                    continue;
                } else {
                    return false;
                }
            }
        }
        for (int i = 2; i < 4; i++) {
            if (s1[i] != s2[i]) {
                return false;
            }
        }
        return true;
    }
};