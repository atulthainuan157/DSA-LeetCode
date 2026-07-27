class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int firstMax = -1, secondMax = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (secondMax <= nums[i]) {
                if (firstMax <= nums[i]) {
                    secondMax = firstMax;
                    firstMax = nums[i];
                } else {
                    secondMax = nums[i];
                }
            }
        }
        return (firstMax - 1) * (secondMax - 1);
    }
};