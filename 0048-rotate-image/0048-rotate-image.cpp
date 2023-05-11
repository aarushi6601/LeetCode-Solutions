class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //for simple rotation do a little reverse from down to up by using the reverse matrix function and then swap the symmetry. after reversing,the elements across the diagonal will become same of the ans only u have to swap the other rem elements.
        reverse(matrix.begin(),matrix.end());
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=i+1;j<matrix[i].size();j++)
                swap(matrix[i][j],matrix[j][i]);
            
        }
       
    }
};