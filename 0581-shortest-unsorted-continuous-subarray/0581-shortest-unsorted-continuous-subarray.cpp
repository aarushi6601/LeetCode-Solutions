class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
       vector<int>n;
        n=nums;
        int lft=0,right=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n.size();i++)
        {
            if(n[i]!=nums[i])
            {
                lft=i;
                break;
            }
        }
        for(int i=n.size()-1;i>=0;i--)
        {
            if(n[i]!=nums[i])
            {
                right=i;
                break;
            }
        }
        if(right==0 && lft==0) return 0;
        return right-lft+1;
        
    }
};