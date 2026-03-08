class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        unordered_set<int> present;
        for (auto& s : nums) {
            present.insert(stoi(s, nullptr, 2));
        }
        for (int i = 0; i < (1 << n); i++) {
            if (present.find(i) == present.end()) {
                string result;
                for (int j = n - 1; j >= 0; j--) {
                    result.push_back(((i >> j) & 1) + '0');
                }
                return result;
            }
        }
        return "";
    }
};