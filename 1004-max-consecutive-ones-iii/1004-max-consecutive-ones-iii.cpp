class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        //find th max window siz st th sum is max and no of zros can b at th max k
        int end=0,start=0,zro=0,ans=0;
        for(int end=0;end<nums.size();end++)
        {
            if(nums[end]==0)
                zro++;
            if(zro>k)
            {
                if(nums[start]==0)
                    zro--;
                start++;
            }
            ans=max(ans,end-start+1);
           
        }
        return ans;
    }
};