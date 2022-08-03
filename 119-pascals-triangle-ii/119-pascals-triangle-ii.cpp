class Solution {
public:
    vector<int> getRow(int rowIndex) {
         vector<vector<int>> res;
        vector<int> temp;
        temp.push_back(1);
        if(rowIndex==0)
            return temp;
        if(rowIndex >=1)
        {
            res.push_back(temp);
        }
        for(int i=1;i<=rowIndex;i++)
        {
            vector<int> v;
            for(int j=0;j<=i;j++)
            {
                if(j==0)
                {
                    v.push_back(res[i-1][0]);
                }
                else if(j==i)
                {
                    v.push_back(res[i-1][j-1]);
                }
                else
                {
                    v.push_back(res[i-1][j-1] + res[i-1][j]);
                }
            }
            res.push_back(v);
        }
        return res[res.size()-1];
    }
};