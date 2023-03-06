class Solution {
public:
    int bitwiseComplement(int n) {
        
    int temp=n;
    int mask=0;
    int ans;
    if(n==0)
    {
        ans=1;
    }
    else
    {
        while(temp!=0)
        {
            mask= (mask<<1) | 1;
            temp=temp>>1;
        }
        ans=(~n) & mask;
    }
    return ans;


    }
};