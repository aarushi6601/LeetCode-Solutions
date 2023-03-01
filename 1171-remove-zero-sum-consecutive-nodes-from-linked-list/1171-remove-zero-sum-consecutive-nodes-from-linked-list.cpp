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
    ListNode* removeZeroSumSublists(ListNode* head) {
        
       if(head==NULL) return head;
        ListNode* dummy=new ListNode(0);
        int pref=0;
        unordered_map<int,ListNode*> mp;
        dummy->next=head;
        mp[0]=dummy;
        while(head)
        {
            pref+=head->val;
            if(mp.find(pref)!=mp.end())
            {
                ListNode* start=mp[pref];
                int sum=pref;
                while(start!=head &&  start!=NULL)
                {
                    start=start->next;
                    sum+=start->val;
                    if(start!=head)
                        mp.erase(sum);
                }//erasing the value from the map which has to be erased from the linkedlist
                mp[pref]->next=head->next;
            }
            else
            {
                mp[pref]=head;
            }
            head=head->next;
        }
        return dummy->next;
    }
};