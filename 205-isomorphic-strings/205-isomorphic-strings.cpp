class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int len = s.size();
        char iso[128] = {};
        for (int i = 0; i < len; i++) {
            char c = s[i];
            if (!iso[c]) {
                for (char s: iso) if (s == t[i]) return false;
                iso[c] = t[i];
            }
            else if (iso[c] != t[i]) return false;
        }
        return true;
    }
};