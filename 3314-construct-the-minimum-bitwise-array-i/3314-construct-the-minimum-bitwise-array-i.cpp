class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        for (int value : nums) {
            int found=-1;
            for (int j = 0; j <= value; j++) {
                if ((j | (j + 1)) == value) {
                    found=j;
                    break;
                }
            }
            ans.push_back(found);
        }
        return ans;
    }
};