class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int even = 0, odd = n - 1;
        while (even < odd) {
            while (even < odd && nums[even] % 2 == 0) {
                even++;
            }
            while (even < odd && nums[odd] % 2 != 0) {
                odd--;
            }
            swap(nums[even], nums[odd]);
            even++;
            odd--;
        }
        return nums;
    }
};