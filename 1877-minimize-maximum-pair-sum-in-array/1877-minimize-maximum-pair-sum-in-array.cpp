class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0, n=nums.size()-1;
        int maxSum=0;
        while(i<n) {
            maxSum=max(maxSum, nums[i]+nums[n]);
            i++;
            n--;
        }
        return maxSum;
    }
};