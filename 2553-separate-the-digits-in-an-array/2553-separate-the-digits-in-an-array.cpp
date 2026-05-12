class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            int val = nums[i];
            vector<int> num;
            while (val != 0) {
                num.push_back(val % 10);
                val /= 10;
            }
            for (int j = num.size() - 1; j >= 0; j--) {
                ans.push_back(num[j]);
            }
        }
        return ans;
    }
};