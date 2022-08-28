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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
if(l1==NULL)  return l2;
if(l2==NULL) return l1;
    ListNode*  res=NULL;
     ListNode* tail=NULL;
        int carry=0;
    while( l1 &&l2){
        ListNode* temp= new ListNode( (l1->val+l2->val+carry)%10);
         carry=(l1->val+l2->val+carry)/10;
         if(res == NULL)
         {      res = temp;
          tail =res;
         }
     else
         {
            tail->next=temp;
            tail=temp;
           
         }
         l1 = l1->next;
         l2 = l2->next;
    }
if(l1 == NULL)
 {
     while(l2)
         {
         ListNode* temp = new ListNode((l2->val+ carry)%10);
         carry   = (l2->val + carry)/10;
          tail->next=temp;
         tail=temp;              
         l2 = l2->next;
        }
 } 
if(l2 == NULL)
 {
     while(l1)
         {
         ListNode* temp = new ListNode((l1->val+ carry)%10);
         carry   = (l1->val + carry)/10;
          tail->next=temp;
         tail=temp;              
         l1 = l1->next;
        }
 }  
 if(carry > 0)
 {
      ListNode *temp = new ListNode(carry);
      tail->next=temp;
 } 
        return res;
    }
};