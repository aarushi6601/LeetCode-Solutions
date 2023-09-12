class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(vector<int> &row:image)
        {
            reverse(row.begin(),row.end());
            for(int &val:row)
            {
                val^=1;
            }
                
        }
        return image;
    }
};