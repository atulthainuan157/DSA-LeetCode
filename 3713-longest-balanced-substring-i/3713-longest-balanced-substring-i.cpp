class Solution {
public:
    int longestBalanced(string s) {
        int n = s.size();
        int maxStr = 0;
        for (int i = 0; i < n; i++) {
            unordered_map<char, int> m;
            for (int j = i; j < n; j++) {
                m[s[j]]++;
                int freq = m.begin()->second;
                bool isOk = true;
                for (auto val : m) {
                    if (val.second != freq) {
                        isOk = false;
                    }
                }
                if (isOk) {
                    maxStr = max(maxStr, j - i + 1);
                }
            }
        }
        return maxStr;
    }
};