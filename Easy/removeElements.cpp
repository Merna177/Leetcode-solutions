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
ListNode* removeElements(ListNode* head, int val) {
        ListNode* cur = head;
        ListNode* prev = NULL;
        ListNode* node = NULL;
        if(head==NULL)
            return head;
        while(cur!=NULL) {
            if(cur->val == val) {
                node = cur;
                if(prev){
                prev->next = cur->next;
                cur = prev->next;
            
                }else{
                    head = cur = cur->next;
                }
                delete node;
           
        }
            else{
                prev=cur;
                cur=cur->next;
                
            }
        }
        
        return head;
    }
};
