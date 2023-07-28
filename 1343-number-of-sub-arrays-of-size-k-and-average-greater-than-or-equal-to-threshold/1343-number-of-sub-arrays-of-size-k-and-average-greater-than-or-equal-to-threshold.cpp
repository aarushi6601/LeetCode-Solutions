class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        
int c=0,sum=0,n=arr.size();
threshold=k*threshold;
for(int i=0;i<k;i++){
sum+=arr[i];
}
if(sum>=threshold)c++;
for(int i=0;i<n-k;i++){
sum-=arr[i];
sum+=arr[i+k];
if(sum>=threshold)c++;
}
return c;

}
    
};