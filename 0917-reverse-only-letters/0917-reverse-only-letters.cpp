class Solution {
public:
    bool isAlphabet(char ch) {
        if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {
            return true;
        }
        return false;
    }

    string reverseOnlyLetters(string s) {
        int st = 0;
        int end = s.length() - 1;
        while (st < end) {
            if (!isAlphabet(s[st])) {
                st++;
            }
            if (!isAlphabet(s[end])) {
                end--;
            }
            if (isAlphabet(s[st]) && isAlphabet(s[end])) {
                swap(s[st], s[end]);
                st++;
                end--;
            }
        }
        return s;
    }
};