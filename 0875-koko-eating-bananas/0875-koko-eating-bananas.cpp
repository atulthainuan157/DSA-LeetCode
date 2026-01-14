class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = 1;
        for (int i = 0; i < piles.size(); i++) {
            high = max(high, piles[i]);
        }
        int ans = high;
        while (low <= high) {
            int k = low + (high - low) / 2;
            long long hours = 0;
            for (int i = 0; i < piles.size(); i++) {
                hours += (piles[i] + k - 1) / k;
            }
            if (hours <= h) {
                ans = k;
                high = k - 1;
            } else {
                low = k + 1;
            }
        }
        return ans;
    }
};