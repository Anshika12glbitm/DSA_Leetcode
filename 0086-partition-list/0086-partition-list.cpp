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
    ListNode* partition(ListNode* head, int x) {
        ListNode *tempLess = new ListNode(0);
        ListNode *tempGreater = new ListNode(0);

        ListNode *less = tempLess;
        ListNode *greater = tempGreater;

        while(head!=NULL)
        {
            if(head->val < x)
            {
                less->next = head ;
                less = less->next;
            }
            else
            {
                greater->next=head;
                greater = greater->next;
            }
            head  = head->next;
        }

        less->next = tempGreater->next;
        greater->next = NULL;

        return tempLess ->next;
    }
};