class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        vector<bool> isValid(n, false);
        for (int i = 0; i < n; i++) {
            if (key == nums[i]) {
                int left = max(0, i - k);
                int right = min(n - 1, i + k);
                for (int j = left; j <= right; j++) {
                    isValid[j] = true;
                }
            }
        }
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (isValid[i]) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};