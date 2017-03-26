/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::sortList(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    if(A==NULL || A->next == NULL)
    return A;
    
    ListNode* fast =A->next;
    ListNode* slow = A;
    
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    
    ListNode* t = slow->next;
    slow->next=NULL;
    
    ListNode* h1 = sortList(A);
    ListNode* h2 = sortList(t);
    
    ListNode* dummy = new ListNode(0);
    ListNode* ref = dummy ;
    
    while(h1!=NULL && h2!=NULL)
    {
        
        if(h1->val < h2->val)
        {
            ref->next=h1;
            h1=h1->next;
            ref=ref->next;
        }
        else
        {
            ref->next=h2;
            h2=h2->next;
            ref=ref->next;
        }
    }
    
    while(h1)
    {
        ref->next=h1;
        h1=h1->next;
        ref=ref->next;
    }
    
    while(h2)
    {
        ref->next=h2;
        h2=h2->next;
        ref=ref->next;
    }
    
    ref->next=NULL;
    
    ListNode* f = dummy->next;
    free(dummy);
    return f;
}
