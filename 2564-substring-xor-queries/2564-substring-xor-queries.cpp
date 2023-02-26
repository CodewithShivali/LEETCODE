class Solution {
public:
 vector<vector<int>> substringXorQueries(string s, vector<vector<int>> &q)
{

    map<int, vector<int>> ans;
    int n = s.size();
    for (int i = 0; i < n; ++i)
    {

        int cur = 0;

        for (int j = 0; j < min(31, n - i); ++j)
        {

            cur <<= 1;
            cur += (int)(s[i + j] - '0');

            if (ans.find(cur) == ans.end())
            {
                ans[cur] = {i, i + j};
            }
            else
            {
                if (j < ans[cur][1] - ans[cur][0])
                {

                    ans[cur] = {i, i + j};
                }
            }
        }
    }

    vector<vector<int>> ret;
    for (auto u : q)
    {
        int z = u[1] ^ u[0];

        if (ans.find(z) != ans.end())
        {
            ret.push_back({ans[z]});
        }
        else
        {
            ret.push_back({-1, -1});
        }
    }
    return ret;
}
};