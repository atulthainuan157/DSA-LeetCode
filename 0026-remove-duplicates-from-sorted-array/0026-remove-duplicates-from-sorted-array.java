class Solution {
    public int removeDuplicates(int[] nums) {
        int n=nums.length;
        int i=1;
        int j=1;
        int c=1;
        while(i<n){
            if(nums[i]!=nums[i-1]){
                c++;
                nums[j]=nums[i];
                j++;
            }
            i++;
        }
        return c;

        
    }
}