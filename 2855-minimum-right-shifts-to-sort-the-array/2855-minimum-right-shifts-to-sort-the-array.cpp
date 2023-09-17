class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
    vector<int>v=nums;
    int n=nums.size();
    for(int i=0;i<n;i++) nums.push_back(nums[i]);
    sort(v.begin(),v.end());
    int i=0;
    while(nums[i]!=v[0]) i++;
    for(int j=0;j<n;j++)
    {
        if(nums[i+j]!=v[j]) return -1;
    }
    return i==0?0:n-i;
}
};