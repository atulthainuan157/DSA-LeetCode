class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        int mx = nums[0];
        vector<int> prefixGCD(n);

        for (int i = 0; i < n; i++) {
            mx = max(mx, nums[i]);
            prefixGCD[i] = gcd(nums[i], mx);
        }

        sort(prefixGCD.begin(), prefixGCD.end());

        int left = 0, right = n - 1;
        long long ans = 0;

        while (left < right) {
            ans += gcd(prefixGCD[left], prefixGCD[right]);
            left++;
            right--;
        }

        return ans;
    }
};