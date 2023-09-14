class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int current=0;
        int ma=current;
        for(int n:gain)
        {
            current+=n;
            ma=max(ma,current);
        }
        return ma;
    }
};