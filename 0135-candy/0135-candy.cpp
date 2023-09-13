class Solution {
public:
    int candy(vector<int>& rating) {
        //first loop go from left to right and in the second loop go from right to left and compare, if theres a need of more candies then do currentindex+1 candies to tht deserving candidate with higher rating
        int n=rating.size();
        if(n==1) return 1;
        vector<int>candies(n,1);
        for(int i=1;i<n;i++)
        {
            if(rating[i]>rating[i-1] && candies[i]<=candies[i-1])
                candies[i]=candies[i-1]+1;
        }
        for(int i=n-2;i>=0;i--)
        {
            if(rating[i]>rating[i+1] && candies[i]<=candies[i+1])
                candies[i]=candies[i+1]+1;
        }
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=candies[i];
        return sum;
        
    }
};