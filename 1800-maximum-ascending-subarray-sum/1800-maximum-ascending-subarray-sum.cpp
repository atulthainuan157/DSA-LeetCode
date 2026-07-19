class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum = 0, currSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] <= nums[i - 1]) {
                currSum = 0;
            }
            currSum += nums[i];
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }
};