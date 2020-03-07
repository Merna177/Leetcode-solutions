/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
      ListNode* it;
      if(l1==NULL)
          return l2;
      else if(l2==NULL)
          return l1;
      
     if(l1->val < l2->val){
        it=l1;
        l1=l1->next;
     }else
     {
        it=l2;
        l2= l2->next;
     }
    ListNode* head=it;
    while(l1!=NULL && l2!=NULL){
        if(l1->val < l2->val){
            it->next=l1;
            l1=l1->next;
        }
        else{
            it->next=l2;
            l2=l2->next;
            }
        it = it->next;
    }
        if(l1==NULL)
            it->next=l2;
        else 
            it->next=l1;
        return head;
    }
};
