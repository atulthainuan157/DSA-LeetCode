class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vovels = {'a', 'e', 'i', 'o', 'u',
                                      'A', 'E', 'I', 'O', 'U'};
        int st = 0, end = s.length() - 1;
        while (st < end) {
            if (vovels.find(s[st]) != vovels.end() &&
                vovels.find(s[end]) != vovels.end()) {
                swap(s[st], s[end]);
                st++;
                end--;
            } else if (vovels.find(s[st]) != vovels.end()) {
                end--;
            } else if (vovels.find(s[end]) != vovels.end()) {
                st++;
            } else {
                st++;
                end--;
            }
        }
        return s;
    }
};