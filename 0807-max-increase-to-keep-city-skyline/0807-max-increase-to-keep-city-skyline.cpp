class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        //ans= min(max val of all rows, max val of all cols)
        vector<int>row(grid.size(),0),col(grid.size(),0);
        //row[i] stores the max height val for ith row
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                row[i]=max(row[i],grid[i][j]);
                col[j]=max(col[j],grid[i][j]);
            }
        }
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
                ans+=min(row[i],col[j])-grid[i][j];
        }
        return ans;
    }
};