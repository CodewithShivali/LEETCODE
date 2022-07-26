class Solution {
    public int[] sortedSquares(int[] nums) {
        
        int n= nums.length;
        int output[]=new int[n];
        int k=n-1;
        for(int left=0,right=n-1;left<=right;){
            if(Math.abs(nums[left])>nums[right]){
                output[k--]=nums[left]*nums[left];
                left++;
            }
            else {
                output[k--]=nums[right]*nums[right];
                right--;
            }
            
        }
            
         return output;
 
    }
}