class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return 1;
        }
        int maxIncreasingLength = 0;
        int maxDecreasingLength = 0;
        int increasingLength = 1, decreasingLength = 1;
        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1]) {
                increasingLength++;
                decreasingLength = 1;
            } else if (nums[i] < nums[i - 1]) {
                decreasingLength++;
                increasingLength = 1;
            } else {
                increasingLength = 1;
                decreasingLength = 1;
            }
            maxIncreasingLength = max(maxIncreasingLength, increasingLength);
            maxDecreasingLength = max(maxDecreasingLength, decreasingLength);
        }
        return max(maxIncreasingLength, maxDecreasingLength);
    }
};