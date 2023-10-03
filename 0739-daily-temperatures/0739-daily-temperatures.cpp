class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& tmp) {
        //sam as nxt gratr lmnt xcpt that w hav to deal with indices n not th actual lmnt
        stack<int> st;
        vector<int> nxt(tmp.size());
        for(int i = 0; i < tmp.size(); i++) {
            while(!st.empty() and tmp[i] > tmp[st.top()]) {    // pop till current temp < stack's top's temp. This maintains monotonic stack
                nxt[st.top()] = i - st.top();           // cur day will be next warmer day for each element that's popped
                st.pop();
            }
            st.push(i);                                // push onto stack to find next warmer day for cur later on
        }
        return nxt;
    }
};