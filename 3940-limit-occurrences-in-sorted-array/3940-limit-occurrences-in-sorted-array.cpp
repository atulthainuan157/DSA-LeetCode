class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (count < k || nums[count - k] != nums[i]) {
                nums[count++] = nums[i];
            }
        }
        nums.resize(count);
        return nums;
    }
};