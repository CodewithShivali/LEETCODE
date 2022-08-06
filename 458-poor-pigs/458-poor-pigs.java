//JAVA:-
class Solution {
    public int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int Trial = minutesToTest/minutesToDie + 1;
        int c =0;
        int total =1;
          while (total<buckets)
          {
              total = total * Trial;
              c++;
          }
        return c;
    }
}

// c++ :-
//class Solution {
//public:
  //  int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
    //int t = minutesToTest / minutesToDie;
     //return ceil(log(buckets) / log(t+1));
    //}
//};