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
    ListNode* reverseList(ListNode* head) {
        // we will need three pointers

        ListNode* prev = NULL; // We will return this as the head of the reversed LL
            
        while (head != NULL){
            auto temp = head;
            head = head->next;
            temp->next = prev;
            prev = temp;
        }
        
        return prev;
        
    }
};
