/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    if(A==NULL|| A->next==NULL)
    return A;
    
    ListNode* temp = new ListNode(0);
    temp->next=A;
    A=temp;
    while(true)
    {
        if(temp->next==NULL) break;
        if(temp->next->next==NULL) break;
        
        ListNode *p=temp->next;
        ListNode *q=p->next;
        
        p->next=q->next;
        q->next=p;
        temp->next=q;
        temp=p;
        
    }
    return A->next;
}
