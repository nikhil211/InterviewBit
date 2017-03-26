/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 int length(ListNode *A)
 {
     int count =0;
     while(A!=NULL)
     {
         count++;
         A=A->next;
     }
 
     return count;
 }
/* int min(int a, int b);
 {
     return (a<b)?a:b;
 }
 int max(int a, int b);
 {
     return (a>b)?a:b;
 }*/
 
 ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A==NULL && B==NULL)
    return NULL;
    if(A==NULL || B==NULL)
    return NULL;
    int len1=length(A);
    int len2=length(B);
    int d=abs(len1-len2);
    if(len1<len2)
    {
        ListNode* temp=A;
        A=B;
        B=temp;
    }
    ListNode * h1=A;
    ListNode * h2=B;
    for(int i=0;i<d;i++)
    A=A->next;
    //int m = min(len1,len2);
    //int n = max(len1,len2);
    while(A!=NULL&&B!=NULL)
    {
        if(A==B)
        return A;
        A=A->next;
        B=B->next;
    }
    return NULL;
}
