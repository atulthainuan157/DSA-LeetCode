class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int>mp;

        for (int i = 0; i <= n - k; i++) {
            unordered_set<int>st;
            for (int j = i; j < i + k; j++) {
                st.insert(nums[j]);
            }
            for(int x : st) {
                mp[x]++;
            }
        }

        int maxSingle = -1;
        for (auto [x, count] : mp) {
            if (count == 1) {
                maxSingle = max(x, maxSingle);
            }
        }
        return maxSingle;
    }
};