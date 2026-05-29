class Solution {
public:
    int calculateSum(int num) {
        int sum = 0;
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    int minElement(vector<int>& nums) {
        int n = nums.size();
        int result = INT_MAX;
        for (int val : nums) {
            result = min(result, calculateSum(val));
        }
        return result;
    }
};