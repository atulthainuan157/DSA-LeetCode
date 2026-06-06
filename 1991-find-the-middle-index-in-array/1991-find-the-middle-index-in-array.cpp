class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;
        int leftSum = 0;
        for (int val : nums) {
            totalSum += val;
        }
        for (int i = 0; i < n; i++) {
            totalSum -= nums[i];
            if (leftSum == totalSum) {
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
};