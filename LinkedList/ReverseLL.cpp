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
        ListNode* temp = head;
        ListNode* tempPrev = NULL;
        while(temp != NULL)
        {
            ListNode* tempNext = temp->next;
            temp->next = tempPrev;
            tempPrev = temp;
            temp = tempNext;
        }
        return head = tempPrev;
        
    }
};