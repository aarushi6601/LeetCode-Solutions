class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro=1,sum=0;
        while(n)
        {
            int dig=n%10;
            sum+=dig;
            pro*=dig;
            n/=10;
        }
        return pro-sum;
    }
};