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
     int count=0;
     while(A!=NULL)
     {
         count++;
         A=A->next;
         
     }
     return count;
 }
ListNode* Solution::rotateRight(ListNode* A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int l = length(A);
    B=B%l;
    int k = l-B-1;
    ListNode* org =A;
    ListNode* curr = A;
    ListNode* kth;
    int c=0;
    while(c<k && curr!=NULL)
    {
        curr=curr->next;
        c++;
    }
    
    kth=curr;
    if(curr==NULL)
    return org;
    
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    
    
    curr->next=org;
    
    org=kth->next;
    kth->next=NULL;
    
    
   /* for(int i=1;i<k;i++)
    {
        curr=curr->next;
    }
    curr->next=NULL;*/
    return org;
    
    
}
