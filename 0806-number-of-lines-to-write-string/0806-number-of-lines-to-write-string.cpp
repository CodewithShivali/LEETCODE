class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int l=0,r=1;
        for(int i=0;i<s.length();i++)
        {
            if(l+widths[(char)s[i]-97] > 100)
            {
                r++;
                l=widths[(char)s[i]-97];
            }
            else
                l+=widths[(char)s[i]-97];
        }
        return {r,l};
    }
};