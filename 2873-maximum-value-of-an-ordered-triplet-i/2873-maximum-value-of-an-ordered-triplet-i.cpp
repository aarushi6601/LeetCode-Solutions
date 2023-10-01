class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        vector<int>prf(n,0),suff(n,0);
        prf[0]=nums[0];
        for(int i=1;i<n;i++){
            prf[i]=max(prf[i-1],nums[i]);
           
        }
        int m=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suff[i]=m;
            m=max(m,nums[i]);
        }
        long long ans=0;
        for(int i=0;i<n-1;i++){
            long long v= (prf[i]-(1LL*nums[i]))*(1LL*suff[i]);
           ans=max(ans,v);
        }
        return ans;
        
    }
};

//to convrt an int to long w multiply it with 1LL
// //It consists of three elements from the array.
// The first element is the maximum value in the prefix of the current element.
// The second element is the current element itself.
// The third element is the maximum value in the suffix of the current element.
