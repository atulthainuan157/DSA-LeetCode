class Solution {
public:
    void getPermutation(vector<int>& nums, vector<vector<int>>& ans, int idx) {
        if (idx == nums.size()) {
            ans.push_back(nums);
            return;
        }
        unordered_set<int> us;
        for (int i = idx; i < nums.size(); i++) {
            if (us.count(nums[i])) {
                continue;
            }
            us.insert(nums[i]);
            swap(nums[i], nums[idx]);
            getPermutation(nums, ans, idx + 1);
            swap(nums[i], nums[idx]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        getPermutation(nums, ans, 0);
        return ans;
    }
};