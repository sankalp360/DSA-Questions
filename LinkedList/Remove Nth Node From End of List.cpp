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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int k=0;

        while(temp != NULL)
        {
            temp = temp->next;
            k++;
        }
        if(k == n)
        {
            return head->next;
        }
        ListNode* tempPrev = head;
        temp = head->next;
        --k;
        
        while(k != n)
        {
            tempPrev = temp;
            temp=temp->next;
            --k; 
        }
        
        tempPrev->next = temp->next;
        return head;
    
    }
};
