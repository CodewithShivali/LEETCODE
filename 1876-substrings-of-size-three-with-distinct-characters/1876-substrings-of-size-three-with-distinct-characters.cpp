class Solution {
public:
    int countGoodSubstrings(string s) {
        int cnt = 0;
        int sz = s.size();
        if(sz<3)return 0;
        for(int i = 0; i < sz-2; i++){
            string sb = s.substr(i,3);
            sort(sb.begin(),sb.end());
            for(int j = 0; j < 3; j++){
                if(j==2)cnt++;
                else if(sb[j]==sb[j+1])break;
            }

        }
        return cnt;
    }
};