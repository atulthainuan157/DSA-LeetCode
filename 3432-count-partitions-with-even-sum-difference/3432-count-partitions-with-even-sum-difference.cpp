class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int lastSum=0;
        for(int val : nums)
            lastSum+=val;

        int prefixSum=0, partitions=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            prefixSum+=nums[i];
            if((prefixSum-(lastSum-prefixSum))%2==0)
                partitions++;
        }
        return partitions;
    }
};
