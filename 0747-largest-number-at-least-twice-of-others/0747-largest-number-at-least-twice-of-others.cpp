class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int val = INT_MIN;
        int idx;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > val) {
                idx = i;
                val = nums[i];
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (val / 2 < nums[i] && nums[i] != val) {
                return -1;
            }
        }
        return idx;
    }
};