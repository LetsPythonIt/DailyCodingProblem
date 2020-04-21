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
        
        ListNode* first = l1;
        ListNode* second = l2;
        ListNode* l3 = new ListNode(); // A new linked list
        ListNode* mergePointer = l3;
        // cout << "Check: " << mergePointer->val;
        if (first == NULL && second != NULL) return l2;
        if (second == NULL && first != NULL) return l1;
        if (first == NULL && second == NULL){
            l3 = NULL;
            return l3;
        }
        
        while (true){

            if (first->val <= second->val) {
                // cout << first->val << " ";
                mergePointer->val = first->val;
                first = first->next;
            }
            else if (first->val >= second->val){
                // cout << second->val << " ";
                mergePointer->val = second->val;
                second = second->next;
            }
            if (first == NULL || second == NULL) break; // Break if one of the list is over
            mergePointer->next = new ListNode;
            mergePointer = mergePointer->next;
        }
        
        // Continue with whichever list is bigger
        if (first == NULL) mergePointer->next = second;
        if (second == NULL) mergePointer->next = first;
     
        return l3;
    }
};
