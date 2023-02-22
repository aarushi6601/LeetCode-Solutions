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
    ListNode* reverseList(ListNode* head) {
        ListNode *nextn, *prevNode = NULL;
        while (head) {
           nextn = head->next;
            head->next = prevNode;
            prevNode = head;
            head = nextn;
        }
        return prevNode;
    }
};