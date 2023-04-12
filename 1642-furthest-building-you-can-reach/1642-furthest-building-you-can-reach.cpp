class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
       priority_queue<int>usedBricks;//prq is the max heap that stores the no of bricks used at every step ie the max at the top
        int i=0;
        for(i=0;i<heights.size()-1;i++)
        {
            int diff=heights[i+1]-heights[i];
            if(diff<=0) continue;
            bricks-=diff;
                usedBricks.push(diff);
            
            
            if(bricks<0)
            {
                bricks+=usedBricks.top();
                usedBricks.pop();
                ladders--;
            }
            if(ladders<0) break;
        }
        return i;
    }
};