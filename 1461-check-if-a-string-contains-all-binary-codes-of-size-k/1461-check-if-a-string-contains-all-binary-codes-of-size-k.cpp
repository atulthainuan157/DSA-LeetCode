class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if (s.size() < k) {
            return false;
        }
        unordered_set<string> us;
        string temp = s.substr(0, k);
        us.insert(temp);
        for (int i = k; i < s.size(); i++) {
            temp = temp.substr(1) + s[i];
            us.insert(temp);
        }
        return (us.size() == (1 << k));
    }
};