/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head)
{
    struct ListNode *low = head;
    struct ListNode *fast = head;
    
    while (fast != NULL && fast ->next != NULL)
    {
        low = low->next;
        fast = fast->next->next;
    }
    
    return low;
}

