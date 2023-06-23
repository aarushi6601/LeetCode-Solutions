class Solution {
public:
    int largestCombination(vector<int>& nums) {
        int ans=0;
        //always for ques involving checking every bit question we take the value or iterate from 0 to 32 coz the max size int can take is 2^32 so which means 32 bits
        for(int i=0;i<32;i++)
        {
            int curr=0;
            //for every bit position ie i we go through all the nos of the array complexity is O(32*n)
            for(int n:nums)
            {//pushing every integer of the candidate array to the ith position and finding its and with 1 will check how many nos have bit set at 0th position, how many nos have bit set at 1st position. for every position of i we go through all the nos
                curr+=(n>>i)&1;
            }
            //finding the max length of the combinations having and of all the nos greater than 0
            ans=max(ans,curr);
        }
    return ans;
    }
};