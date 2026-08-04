class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int maxNum = nums[0], minNum = nums[n - 1];
        vector<int> result;
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i] + 1) {
                continue;
            }
            int value = nums[i - 1] + 1;
            while (value < nums[i]) {
                result.push_back(value);
                value++;
            }
        }
        return result;
    }
};