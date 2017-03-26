/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::insertionSortList(ListNode* head) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    if(head==NULL || head->next == NULL)
    return head;
    
    ListNode* dumy = new ListNode(0);
    dumy->next = head;
    ListNode* prev = dumy;
    ListNode* curr = head;
    
    while(curr)
    {
        if(curr->next && curr->next->val < curr->val)
        {
            while(prev->next && prev->next->val < curr->next->val)
            prev=prev->next;
            
            ListNode* temp=prev->next;
            prev->next=curr->next;
            curr->next=prev->next->next;
            prev->next->next=temp;
            
            prev=dumy;
        }
        else
        {
            curr=curr->next;
        }
        
    }
    
    
    return dumy->next;
}
