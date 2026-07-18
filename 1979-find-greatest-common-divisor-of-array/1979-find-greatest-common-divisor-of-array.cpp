class Solution {
public:
    int findGCD(vector<int>& nums) {
        int small = INT_MAX, large = INT_MIN;
        for (int val : nums) {
            small = min(small, val);
            large = max(large, val);
        }
        return gcd(small, large);
    }
};