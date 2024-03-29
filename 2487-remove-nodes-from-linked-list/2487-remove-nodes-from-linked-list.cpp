/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
        
    }
    ListNode* removeNodes(ListNode* head) {
        head=reverse(head);
        auto p=head;
        while(p!=NULL && p->next!=NULL)
        {
            if(p->val>p->next->val)
            {
                p->next=p->next->next;
            }
            else p=p->next;
        }
      return reverse(head);  
    }
    
};