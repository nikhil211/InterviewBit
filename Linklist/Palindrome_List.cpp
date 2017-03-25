/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
    stack<ListNode*> s;
    
    ListNode* head=A;
    int len=0;
    while(head!=NULL)
    {
        len++;
        s.push(head);
        head=head->next;
    }
    head=A;
    while(s.size()!=0 && head!=NULL)
    {
        ListNode* temp=s.top();
       
        if(temp->val!=head->val)
        {
        
            return 0;
        }
        head=head->next;
         s.pop();
        
    }
    return 1;
    
}
