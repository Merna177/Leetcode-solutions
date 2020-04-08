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
    ListNode* middleNode(ListNode* head) {
       ListNode* pt1=head;
       ListNode* pt2=head;
       while(pt2!=NULL){
           if(pt2-> next==NULL){
               break;
           }else if(pt2->next->next==NULL){
               pt1=pt1->next;
               break;
           }
           pt1=pt1->next;
           pt2=pt2->next->next;
       }
        return pt1;
    }
};
