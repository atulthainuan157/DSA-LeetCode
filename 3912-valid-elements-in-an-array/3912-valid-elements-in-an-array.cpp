class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> rightMax(n);
        rightMax[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            rightMax[i] = max(nums[i], rightMax[i+1]);
        }
        vector<int> ans;
        int leftMax = nums[0];
        for (int i = 0; i < n; i++) {
            if (i == 0 || i == n - 1 || nums[i] > leftMax ||
                nums[i] > rightMax[i + 1]) {
                ans.push_back(nums[i]);
            }
            leftMax = max(leftMax, nums[i]);
        }
        return ans;
    }
};