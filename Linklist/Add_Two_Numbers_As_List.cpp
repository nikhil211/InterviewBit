/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode* res=NULL;
    ListNode* prev=NULL;
    ListNode* temp;
    int sum=0,carry=0;
    while(l1||l2)
    {
        sum=(l1?l1->val:0)+(l2?l2->val:0)+carry;
        
        if(sum>=10)
        {
            sum=sum%10;
            carry=1;
        }
        else
        {
            carry=0;
            sum=sum%10;
        }
        
        temp=new ListNode(sum);
        
        if(res==NULL)
        {
            res=temp;
        }
        else
        {
            prev->next=temp;
        }
        prev=temp;
        
        l1=l1?l1->next:NULL;
        l2=l2?l2->next:NULL;
        
    }
    if(carry>0)
    {
        temp->next=new ListNode(carry);
    }
    return res;
}
