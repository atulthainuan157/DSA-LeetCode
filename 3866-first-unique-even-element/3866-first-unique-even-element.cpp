class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        vector<int> temp(101, 0);
        for (int i = 0; i < nums.size(); i++) {
            temp[nums[i]]++;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (temp[nums[i]] == 1 && nums[i] % 2 == 0) {
                return nums[i];
            }
        }
        return -1;
    }
};