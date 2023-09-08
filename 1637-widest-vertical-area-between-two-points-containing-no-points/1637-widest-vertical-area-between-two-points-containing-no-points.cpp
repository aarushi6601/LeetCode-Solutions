class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        //sort the points on the basis of the xaxis coordinates
        sort(points.begin(),points.end(),[](vector<int> &p1,vector<int> &p2){
            if(p1[0]==p2[0]) return p1[1]<p2[1];
            return p1[0]<p2[0];
        });
        // sort(points.begin(),points.end());
        int max=-1;
        for(int i=0;i<points.size()-1;i++)
        {
            if(points[i+1][0]-points[i][0]>max)
            {
                max=points[i+1][0]-points[i][0];
            }
        }
        return max;
    }
};