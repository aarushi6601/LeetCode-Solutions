class Solution {
public:
   vector<int> constructRectangle(int area) {
        int mid = sqrt(area);
        while(mid > 0){
            if(area % mid == 0) return {area/mid, mid};
            mid--;
        }
        return {0, 0}; //never executed
    }
};