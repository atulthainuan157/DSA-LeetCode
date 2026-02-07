class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double currAvg = 0;
        for (int i = 0; i < k; i++) {
            currAvg += nums[i];
        }
        double maxAvg = currAvg;
        for (int i = k; i < n; i++) {
            currAvg += nums[i] - nums[i - k];
            maxAvg = max(maxAvg, currAvg);
        }
        return maxAvg / k;
    }
};