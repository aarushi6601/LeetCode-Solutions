class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int count_less=0,count_eq=0,count_greater=0;
        for(int &x:nums)
        {
            if(x<pivot)
            {
                count_less++;
            }
            else if(x==pivot) 
            {
                count_eq++;
            }
        }
        count_greater=count_less+count_eq;
        //can we overwrite the arar. probably not in this solution
        vector<int>ans(nums.size(),0);
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)
                ans[k++]=nums[i];
            else if(nums[i]==pivot)
            {
                ans[count_less++]=nums[i];
            }
            else 
            {
                ans[count_greater++]=nums[i];
            }
        }
        return ans;
    }
};