class Solution {
    vector<int> ans;
public:
    vector<int> sortArray(vector<int>& nums) {
        ans=nums;
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
    
    void mergesort(vector<int>& nums,int first,int last){
        if(first<last){
            int mid = (first+last)/2;
            mergesort(nums,first,mid);
            mergesort(nums,mid+1,last);
            merge(nums,first,last,mid);
        }
    }
    
    void merge(vector<int>& nums,int first,int last,int mid){
        int i=first;
        int j= mid+1;
        int k=first;
        
        while(i<=mid && j<=last){
            if(nums[i]>nums[j]){
                ans[k++]=nums[j++];
              
            } else{
                ans[k++] = nums[i++];
               
            }
        }
     
             while(j<=last)
                ans[k++] = nums[j++];
              
            
           
             while(i<=mid)
            ans[k++]=nums[i++];
           
             
   
        for(int k=first;k<=last;k++){
            nums[k]=ans[k];
        }
  
    }
};