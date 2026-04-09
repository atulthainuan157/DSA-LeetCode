class Solution {
public:
    bool isPalindrome(string s) {
        string str = s;
        reverse(str.begin(), str.end());
        return s == str;
    }

    void getAllParts(string s, vector<string>& partition, vector<vector<string>>& ans) {
        if (s.size() == 0) {
            ans.push_back(partition);
            return;
        }
        for (int i = 0; i < s.size(); i++) {
            string part = s.substr(0, i + 1);
            if (isPalindrome(part)) {
                partition.push_back(part);
                getAllParts(s.substr(i+1), partition, ans);
                partition.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> partition;
        getAllParts(s, partition, ans);
        return ans;
    }
};