class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());

        vector<vector<int>>merged;
       
        for(auto interval:intervals)
        {
            //if the current interval doesnt overlap with the previous interval just append it and also if the list of the merged intervals is empty
            if(merged.empty()|| merged.back()[1]<interval[0])
            {
                //indicates that if the start time for the next interval is actually greater than the current interval
                merged.push_back(interval);
            }
            //otherwise there is an overlap and in this case we need to merge the last interval already present in the merged vector with the current one by changing its last end point
            else{
                //even if we overlap we dont know which interval has a later ending point the current one or the next one
                merged.back()[1]=max(merged.back()[1],interval[1]);
            }
        }
        return merged;
    }
};

//an important point is to understand the use and significance of merged.back()[1] it helps us to keep finding the last vector of the merged list and then keeps updating to that itself