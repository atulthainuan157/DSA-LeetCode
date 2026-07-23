class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int alice = 0, bob = 0;
        for (int val : nums) {
            if (val < 10) {
                alice += val;
            } else {
                bob += val;
            }
        }
        return !(alice == bob);
    }
};