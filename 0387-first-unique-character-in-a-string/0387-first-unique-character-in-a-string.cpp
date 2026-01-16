class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;
        queue<int> Q;
        for (int i = 0; i < s.size(); i++) {
            if (mp.find(s[i]) == mp.end()) {
                Q.push(i);
            }
            mp[s[i]]++;
            while (Q.size() > 0 && mp[s[Q.front()]] > 1) {
                Q.pop();
            }
        }
        return Q.empty() ? -1 : Q.front();
    }
};