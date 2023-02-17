//Sort the array.
//Traverse the array and check if one of the adjacent elements is equal to the current element or not.
//If yes , move ahead. Else return the current element.



class Solution {
public:
    int singleNumber(vector<int>& nums) { 
       sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i+=2)
        {
            if(nums[i]!=nums[i-1])
                return nums[i-1];
        }
        return nums[nums.size()-1];
    }
};