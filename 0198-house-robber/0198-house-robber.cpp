class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) {
            return nums[n - 1];
        }
        int first = nums[0];
        int last = max(nums[0], nums[1]);
        for (int i = 2; i < n; i++) {
            int medium = last;
            last = max(medium, first + nums[i]);
            first = medium;
        }
        return last;
    }
};