class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int> even, odd;
        for (int i = 0; i < n; i++) {
            if (nums[i] & 1) {
                odd.push_back(nums[i]);
            } else {
                even.push_back(nums[i]);
            }
        }
        vector<int> result;
        for (int i = 0; i < even.size(); i++) {
            result.push_back(even[i]);
            result.push_back(odd[i]);
        }
        return result;
    }
};