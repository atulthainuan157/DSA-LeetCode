class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int val : nums) {
            freq[val]++;
        }
        for (auto [val, count] : freq) {
            if (count & 1) {
                return false;
            }
        }
        return true;
    }
};