class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        stack <ListNode*> stk;
        auto curr = head;
        head = new ListNode(INT_MAX, head);
        stk.push(head);
        while(curr){
            while(stk.top()->val<curr->val)
                stk.pop();
            stk.top()->next = curr;
            stk.push(curr);
            curr = curr->next;
        }
        return head->next;
    }
};