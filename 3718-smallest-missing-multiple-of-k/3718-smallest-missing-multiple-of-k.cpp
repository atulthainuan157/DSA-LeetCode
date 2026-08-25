class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> multiples;
        for (int val : nums) {
            if (val % k == 0) {
                multiples.insert(val);
            }
        }
        int ans = k;
        while (ans <= INT_MAX) {
            if (multiples.find(ans) == multiples.end()) {
                return ans;
            }
            ans += k;
        }
        return -1;
    }
};