class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int num : nums) {
            mp[num]++;
        }
        int maxLength = 1;
        if (mp.find(1) != mp.end()) {
            int ones = mp[1];
            if (ones % 2 == 0) {
                ones--;
            }
            maxLength = max(maxLength, ones);
        }
        for (auto& x : mp) {
            if (x.first == 1) {
                continue;
            }
            int currLength = 0;
            long long curr = x.first;
            while (mp.count(curr) && mp[curr] >= 2) {
                currLength += 2;
                if (curr > 31622) {
                    curr = 1e18;
                    break;
                }
                curr *= curr;
            }
            if (mp.count(curr) && mp[curr] > 0) {
                currLength++;
            } else {
                currLength--;
            }
            maxLength = max(maxLength, currLength);
        }

        return maxLength;
    }
};