class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int sum = 0;
        for(int i = 0 ; i < n ; i++)
        {
            gas[i]= gas[i]-cost[i];
            sum+=gas[i];
        }
        cout<<sum<<endl;
        if(sum<0)
            return -1;

        if( n==1 )
            return 0;
        int ans = -1;
        for(int i = 0 ; i<n ;i++ )
        {
            if(gas[i]<=0){
                i++;
            
            }
            int val = 0, c=n;
            int k = i;
            while(c>0){
                val+=gas[k%n];
                if(val<=0 && c!=1)
                {
                    break;
                }
                c--;
                k++;
            }
            if(c== 0){
                ans = i;
                break;
            }
            if(k>=n)break;
            i=k;
        }
        return ans;
    }
};
    