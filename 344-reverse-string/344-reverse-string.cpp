/*class Solution {
public:
    void reverseString(vector<char>& s) {
        int temp;
        for(int i=0;i<s.size()/2;i++)
        {
         temp=s[i];
         s[i]=s[s.size()-1-i];
         s[s.size()-1-i]=temp;
        }
    }
};*/
class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int right = s.size()-1;
        int left = 0;
        while(left < right)
        {
            char c = s[left];
            s[left] = s[right];
            s[right] = c;
            
            left+=1;
            right-=1;
        }
    }
};