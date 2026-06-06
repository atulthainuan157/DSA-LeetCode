class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;
        int leftSum = 0;
        for (int i : nums) {
            totalSum += i;
        }
        for (int i = 0; i < n; i++) {
            totalSum -= nums[i];
            if (totalSum == leftSum) {
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
};