/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 int length(ListNode* A)
 {
     int c=0;
     while(A)
     {
         A=A->next;
         c++;
     }
     return c;
 }
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int len=length(A);
    
    ListNode* dummy=new ListNode(0);
    ListNode* prev=dummy;
    ListNode* curr=A;
    dummy->next=A;
    if(A==NULL || B==0)
    return A;
    
    if(len<B)
    {
        dummy->next=curr->next;
        free(curr);
        A=dummy->next;
        free(dummy);
        return A;
    }
    else
    {
        int k = len-B;
        int i=0;
        while(i<k)
        {
            i++;
            prev=curr;
            curr=curr->next;
        }
        
        prev->next=curr->next;
        free(curr);
        A=dummy->next;
        free(dummy);
        return A;
        
    }
    
}
