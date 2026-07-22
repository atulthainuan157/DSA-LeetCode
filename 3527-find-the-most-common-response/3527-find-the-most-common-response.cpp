class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        unordered_map<string, int> mp;
        int maxFreq = 0;
        for (int i = 0; i < responses.size(); i++) {
            unordered_set<string> st;
            for (string str : responses[i]) {
                st.insert(str);
            }
            for (string str : st) {
                mp[str]++;
                maxFreq = max(maxFreq, mp[str]);
            }
        }
        string ans;
        for (auto x : mp) {
            if (x.second == maxFreq) {
                if (ans.empty() || x.first < ans) {
                    ans = x.first;
                }
            }
        }
        return ans;
    }
};