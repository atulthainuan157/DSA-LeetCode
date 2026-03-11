class Solution {
    public int removeElement(int[] nums, int val) {
        int n=nums.length;
        int i=0;
        int j=0;
        int c=0;
        while(i<n){
            if(nums[i]!=val){
                c++;
                nums[j]=nums[i];
                j++;

            }
            i++;
        }
        return c;
        
    }
}