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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* odd= head,* even= head->next,* evenStart=even;
        while(even && even->next){
            odd->next = odd->next->next;
            even->next= even->next->next;
            odd= odd->next;
            even=even->next;
        }
        odd->next= evenStart;
        return head;
    }
    
};

/*
 1  ->   2 ->  3   ->  4  ->  5 -> NULL   output  1->3->5->2->4->NULL
 
*/
