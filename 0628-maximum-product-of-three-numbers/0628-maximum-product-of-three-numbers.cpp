class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int firstMax = INT_MIN, secondMax = INT_MIN, thirdMax = INT_MIN;
        int firstMin = INT_MAX, secondMin = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= thirdMax) {
                if (nums[i] >= firstMax) {
                    thirdMax = secondMax;
                    secondMax = firstMax;
                    firstMax = nums[i];
                } else if (nums[i] >= secondMax) {
                    thirdMax = secondMax;
                    secondMax = nums[i];
                } else {
                    thirdMax = nums[i];
                }
            }
            if (nums[i] <= secondMin) {
                if (nums[i] <= firstMin) {
                    secondMin = firstMin;
                    firstMin = nums[i];
                } else {
                    secondMin = nums[i];
                }
            }
        }
        return max((firstMax * secondMax * thirdMax),
                   (firstMax * firstMin * secondMin));
    }
};