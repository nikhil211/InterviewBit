/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* head) {
   
    ListNode* dummy=new ListNode(0);
    ListNode* curr=head;
    ListNode* prev=dummy;
    dummy->next=head;
    bool dup=false;
    
    while(curr)
    {
        if(curr->next && curr->val==curr->next->val)
        {
            ListNode* temp=curr->next;
            curr->next=temp->next;
            free(temp);
            dup=true;
        }
        else if(dup)
        {
            prev->next=curr->next;
            free(curr);
            curr=prev->next;
            dup=false;
        }
        else
        {
            prev=curr;
            curr=curr->next;
        }
    }
    
    head=dummy->next;
    free(dummy);
    return head;
}
