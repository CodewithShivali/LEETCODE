class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count[256]={0};
        int f=0,l=0;
        int res=0;
        
        while(l<s.length())
        {
            count[s[l]]++;
            while(count[s[l]]>1)
            {
                count[s[f]]--;f++;
            }
            res=max(res,l-f+1);l++;
        }
        return res;
    }
};