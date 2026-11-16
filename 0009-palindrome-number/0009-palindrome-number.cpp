class Solution {
public:
    bool isPalindrome(int x) {
        int m = x;
        long rem,rev=0;
      if(m>0){
        while(m){
            rem=m%10;
            rev=rev*10+rem;
            m=m/10;
        }
      }
        if(rev==x) return true;
        else return false;
    }
};