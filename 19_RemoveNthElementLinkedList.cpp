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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
    
        ListNode* dummy = new ListNode;
        dummy->next = head;
        
        ListNode* preDelete = dummy;
        
        for (int i=0; i<n; i++){
            if (head == NULL){
                // cout <<"Happened here" << endl;
                return NULL;
            }
            head = head->next;
        }
        
        while(head != NULL){
            preDelete = preDelete->next;
            head = head->next;
        }
        
        preDelete->next = preDelete->next->next;
        return dummy->next;
        
        
        
    }
};
