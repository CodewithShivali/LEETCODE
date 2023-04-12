class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {

        //For checking the edge test cases , as mentioned above in Note
        // copied the strings s1 and s2 in a and b respectively so that the original strings are not lost , and sorted strings a and b and compared them to find whether all characters in both the strings are same (maybe not in order)
        string a = s1;
        string b = s2;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a!=b) return false;
       
       //declared and initialised a counter variable to count the unequal characters from both the strings
       int count = 0;

       //traversed the strings of same length and incremented the counter variable in case unequal string characters are found
       for(int i=0;i<s1.size();++i){
           if(s1[i]!=s2[i]) count++;
       } 

       /* 1.count 0 indicates that the strings are already equal && 2. count 2 indicates that with a single swap we can make the strings equal 
          In both the above cases we need to return true */
       if(count==0 || count==2) return true;

       return false;
    }
};