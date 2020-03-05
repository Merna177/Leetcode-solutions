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
    ListNode* deleteDuplicates(ListNode* head) {
     if(head==NULL)
         return head;
     ListNode* prev = head;
     ListNode* first = head->next;
     while(first!=NULL){
         if(first->val != prev->val){
             prev->next = first;
             prev = prev->next;
         }
         first= first->next;
     }
        prev->next = first;
        return head;
    }
};
