class Solution {
    // private:
    // int sq(int x){return x*x;}
    //when u use it u can make things easier by simply typing sq(p[0]-q[0])
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        //equation of the circle with centers at (h,k) is (x-h)2+(y-k)2=r2
        // so we go check for each coordinate x,y if they fit in the eq of the circle
        vector<int>ans;
        int cnt=0;
        for(int i=0;i<queries.size();i++)
        {
            for(int j=0;j<points.size();j++)
            {
                int x=points[j][0];
                int y=points[j][1];
                int h=queries[i][0];
                 int k=queries[i][1];
                 int r=queries[i][2];
                if(sqrt((x-h)*(x-h)+(y-k)*(y-k))<=r)
                    cnt++;
            }
            ans.push_back(cnt);
            cnt=0;
        }
        return ans;
    }
};

