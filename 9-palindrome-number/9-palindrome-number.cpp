class Solution {
public:
    bool isPalindrome(int x) {
        string s= to_string(x);
        int st =0;
        int end =s.length()-1;
        while(st<end)
        {
            if(s[st++]!=s[end--])
                return false;
        }
    return true;
    }
};