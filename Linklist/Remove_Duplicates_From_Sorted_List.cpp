/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
ListNode* Solution::deleteDuplicates(ListNode* A) {
   
    if(A==NULL)
    return NULL;
    ListNode* head=A;
    ListNode* curr=A;
    ListNode* temp;
    
    while(curr->next!=NULL)
    {
        if(curr->val==curr->next->val)
        {
            temp=curr->next->next;
            free(curr->next);
            curr->next=temp;
        }
        else
        {
            curr=curr->next;
        }
    }
    return head;
    
}
