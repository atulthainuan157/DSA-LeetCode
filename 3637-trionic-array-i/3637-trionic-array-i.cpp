class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while((i+1)<n && nums[i]<nums[i+1]) {
            i++;
        }
        if(i==0) {
            return false;
        }
        int temp=i;
        while((i+1)<n && nums[i]>nums[i+1]) {
            i++;
        }
        if(i==temp) {
            return false;
        }
        int temp2=i;
        while((i+1)<n && nums[i]<nums[i+1]) {
            i++;
        } 
        if(i==temp2) {
            return false;
        }
        return i==n-1;
    }
};