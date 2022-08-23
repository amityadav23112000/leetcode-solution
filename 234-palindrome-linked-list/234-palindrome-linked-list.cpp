/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
ListNode* reverselist(ListNode* head)
{
    ListNode* pre=NULL;
    ListNode* curr=head;
    ListNode* next=NULL;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=pre;
        pre=curr;
        curr=next;
    }
    return pre;
}

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow =head;
        ListNode *fast=head->next;
        while(fast!=NULL&&fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next; 
            
        }
slow->next=reverselist(slow->next);
         slow=slow->next;
    
	
	
    while(slow!=NULL)
    {
        if(head->val!=slow->val)
            return false;
        head=head->next;
        slow=slow->next;
    }
    return true;
}

    
};

