/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* fanzhuan(struct ListNode* head)
{
    struct ListNode *cur=head, *pre=NULL;

    while(cur != NULL)
    {
        struct ListNode *temp=cur->next;

        cur->next=pre;
        pre=cur;
        cur=temp;
    }

    return pre;
}


bool isPalindrome(struct ListNode* head)
{
    struct ListNode *slow=head, *fast=head;

    if(slow->next == NULL)
        return true;

    if(slow->next->next==NULL && slow->val == slow->next->val)
        return true;
    else
        return false;

    while(fast!=NULL && fast->next!=NULL && fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }



    struct ListNode *secondhead=fanzhuan(slow->next);
    
    slow = head;
    fast = secondhead;

    while(slow!=NULL && fast!=NULL)
    {
        if(slow->val != fast->val)
        {
            return false;
        }

        slow=slow->next;
        fast=fast->next;
    }

    return true;
}