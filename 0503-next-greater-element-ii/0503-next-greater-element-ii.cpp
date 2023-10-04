class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
stack<int> st;
vector<int> res(n, -1);
        
for (int i = n * 2 - 1; i >= 0; i--) {
            while (!st.empty() && st.top() <= nums[i % n]) st.pop();
            if (i < n)
                res[i] = st.empty()? -1 : st.top();
            st.push(nums[i % n]);
        }
        return res;
    }
};