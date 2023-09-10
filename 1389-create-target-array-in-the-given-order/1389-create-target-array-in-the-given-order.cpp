class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) 
    {
        vector<int> result;
        for(int i=0;i<index.size();++i)
            result.insert(result.begin()+index[i],nums[i]);
        return result;
    }
    //the syntax of the insert function is as follows vector.insert(end,freq,value)  or vector.insert(end,value); so it inserts the no the given no of times or at the given position and also pushes the next no forward
};