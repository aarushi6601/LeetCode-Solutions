class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n=points.size();
        int ans = 0;

        for(int i=0;i<n;i++){
            unordered_map<double,int> mp;
            double x1 = points[i][0], y1 = points[i][1];
            for(int j=i+1;j<n;j++){   
               
                double x2 = points[j][0], y2 = points[j][1];
                double slope;
                if(x2-x1 == 0){
                    slope = INT_MAX; // slope is infinity for vertical line
                }else{
                    slope = (y2-y1)/(x2-x1);   
                }
                mp[slope]++;
                ans = max(ans,mp[slope]);
            }
        }
        return ans+1; //including point i
    }
};
