/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* head) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    if(head==NULL || head->next==NULL)
    return NULL;
    
    ListNode* slow =head;
    ListNode* fast =head;
    ListNode* temp =head;
    
    while(fast && fast->next)
    {
        slow=slow->next ;
        fast=fast->next->next;
        
        if(slow==fast)
        {
            //loop
            
            while(temp!=slow)
            {
                temp=temp->next;
                slow=slow->next;
            }
            return slow;
        }
    }
    return NULL;
}
