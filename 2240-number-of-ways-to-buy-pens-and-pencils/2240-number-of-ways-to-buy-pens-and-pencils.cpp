class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        //fix the no of pens to buy and then form an equation
        long long ans=0;
        for(int cnt=0;cnt*cost1<=total;cnt++)
            ans+=(total-cost1*cnt)/cost2+1;
        return ans;
    }
};