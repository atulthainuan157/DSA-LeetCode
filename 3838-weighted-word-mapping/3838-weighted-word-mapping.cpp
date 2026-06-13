class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";
        vector<char> alphabet = {'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r',
                                 'q', 'p', 'o', 'n', 'm', 'l', 'k', 'j', 'i',
                                 'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a'};
        for (int i = 0; i < words.size(); i++) {
            int idx = 0, num = 0;
            for (int j = 0; j < words[i].size(); j++) {
                idx = 26 - ('z' - words[i][j]) - 1;
                num += weights[idx];
            }
            ans += alphabet[num % 26];
        }
        return ans;
    }
};