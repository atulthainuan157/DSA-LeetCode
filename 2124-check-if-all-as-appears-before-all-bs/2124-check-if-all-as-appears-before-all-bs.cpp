class Solution {
public:
    bool checkString(string s) {
        bool found_b = false;
        for (char ch : s) {
            if (found_b && ch == 'a') {
                return false;
            }
            if (!found_b && ch == 'b') {
                found_b = true;
            }
        }
        return true;
    }
};