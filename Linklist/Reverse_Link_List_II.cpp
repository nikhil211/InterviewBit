/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* head, int m, int n) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    if(m==n)
    return head;
    
    ListNode* prevHead=NULL;
    ListNode* curr = head;
    ListNode* prev=NULL;
    ListNode* next = NULL;
    ListNode* tail=NULL;
    
    int i=1;
    while(i<m)
    {
        prevHead=curr;
        curr=curr->next;
        i++;
    }
    tail=curr;
    next=curr->next;
    
    while(i<n)
    {
        prev=curr;
        curr=next;
        next=curr->next;
        curr->next=prev;
        i++;
        
    }
    
    if(m!=1)
    {
        prevHead->next=curr;
        tail->next=next;
    }
    else
    {
        head=curr;
        tail->next=next;
    }
    
    return head;
}
