class Solution {
public:
    int countEven(int num) {
        int ans=0,dig,sum=0,d=0;
        for(int i=1;i<=num;i++)
        {
            int d=i;
            sum=0;
            while(d)
            {
                dig=d%10;
                sum+=dig;
                d/=10;
            }
            if(sum%2==0)
                ans++;
        }
        return ans;
    }
};