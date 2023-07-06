class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
       vector<int>freq(51,0),ans;
        int n=nums.size();
       
        for(int i=0,j=0;i<n;i++)
        {
            //count the freq of all neg no in the current window size of k
            if(nums[i]<0) 
                freq[abs(nums[i])]++;//since the indices of an array cant be negative we have to store them as popositives. 1 means it is representing the freq of -1
            if(i-j+1>=k)//we have moved past current window and while shifting to new window we need to find the xth smallest window of the current one
            {
                int cnt=0;
                for(int l=50;l>=1;l--)//freq array stores only neg values therefore taking count till 1
           
                    
                {
                    cnt+=freq[l];//counting the occurences of every val
                    if(cnt>=x)
                    {
                        ans.push_back(-l);//ans array stores xth smallest val for each n every interval. pushing back neg of l as l is the abs val
                        break;
                    }
                }
                //if after going thru whole for loop no neg no is present then push 0
                if(cnt<x) ans.push_back(0);
                if(nums[j]<0) freq[abs(nums[j])]--;//moving out of the current sliding window
                j++;
                
                }
        }
        return ans;
        }
    
};