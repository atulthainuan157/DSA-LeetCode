class Solution {
public:
    bool detectCapitalUse(string word) {
        int capital = 0;
        for (char ch : word) {
            if (ch <= 90) {
                capital++;
            }
        }
        if (capital == word.size() || capital == 0) {
            return true;
        }
        if (capital == 1 && word[0] <= 90) {
            return true;
        }
        return false;
    }
};