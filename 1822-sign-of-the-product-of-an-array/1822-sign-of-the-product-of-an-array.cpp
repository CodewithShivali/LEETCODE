class Solution {
public:
    int arraySign(vector<int>& nums) {
        int c=1,d=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                c=0;
                break;
            }
            else if(nums[i]<0)
                d++;
        }
        if(c==0)
            return 0;
        if(d%2==1 && c==1)
            return -1;
    return 1;
    }
};