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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }

        ListNode *temp = new ListNode(0);
        temp->next = head ;
        ListNode *prev = temp;

        while(prev->next != NULL  && prev->next->next !=NULL)
        {
            ListNode *first = prev->next ;
            ListNode *second = first->next;

            //swap algo
            first->next = second->next;
            second->next = first;
            prev->next = second;

            prev = first;
        }

        return temp->next;
    }
};