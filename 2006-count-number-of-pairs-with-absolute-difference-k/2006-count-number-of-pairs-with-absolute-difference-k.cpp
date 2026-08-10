class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (k == abs(nums[i] - nums[j])) {
                    count++;
                }
            }
        }
        return count;
    }
};