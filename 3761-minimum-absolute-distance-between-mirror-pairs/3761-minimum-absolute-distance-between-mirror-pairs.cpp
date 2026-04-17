class Solution {
public:
    int reverseNumber(int n) {
        int revNum = 0;
        while (n != 0) {
            int rem = n % 10;
            revNum = revNum * 10 + rem;
            n /= 10;
        }
        cout << revNum << endl;
        return revNum;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            if (mp.count(nums[i])) {
                ans = min(ans, i - mp[nums[i]]);
            }
            int r = reverseNumber(nums[i]);
            mp[r] = i;
        }
        return (ans == INT_MAX ? -1 : ans);
    }
};