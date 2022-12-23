class Solution {
public:
    ListNode * reverse(ListNode *head)
    {
        // don't reverse the last node
        if(head->next == NULL) return head;
        
        //recursion will reverse the whole linked list except first two elements
         ListNode *reverseHead = reverse(head->next);
        
         ListNode* temp = head->next;
         temp->next = head;
         head->next = NULL;
        
        return reverseHead;
    }
    ListNode* reverseList(ListNode* head) 
    {
        if(!head) return NULL;
        return reverse(head);
    }
};
