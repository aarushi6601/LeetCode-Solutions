class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        //vry tim our curnt indx dosnt work or w run out of gas w rst th total and start from th nxt indx or tak th nxt indx as our starting point
        int x=0,y=0;
        for(int i:gas)
            x=x+i;
        for(int i:cost)
            y+=i;
        if(x<y)
            return -1;
        
        int diff=0;
        int rs=0,start=0;
        for(int i=0;i<gas.size();i++)
        {
            diff+=(gas[i]-cost[i]);
            if(diff<0)
            {
                diff=0;
                start=i+1;
            }
        }
        return start;
        
    }
};