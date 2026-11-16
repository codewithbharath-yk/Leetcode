class Solution {
public:
    int subtractProductAndSum(int n) {
      int m,rev,sum=0,prod=1;
       m=n;
        while(m){
            
            rev=m%10;
            sum+=rev;
            prod=prod*rev;
            m=m/10;
        }
        return (prod-sum);
    
    }
};