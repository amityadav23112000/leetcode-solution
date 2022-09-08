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
    class compare{
        public:
        bool operator()(ListNode* a,ListNode* b){
            return a->val>b->val;
        }
        
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* head=new ListNode(0);
        ListNode* temp=head;
        priority_queue<ListNode*,vector<ListNode*>,compare>p;
        for( int i=0;i<lists.size();i++){
            if(lists[i])
            p.push(lists[i]);
        }
        while(p.empty()==false){
            ListNode* a=p.top();
            p.pop();
            temp->next=a;
            temp=temp->next;
            if(a->next!=NULL) p.push(a->next);
        }
        return head->next;
    }
};