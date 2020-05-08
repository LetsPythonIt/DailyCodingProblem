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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* l3 = new ListNode(0);
        ListNode* head = l3;
        
        while(l1 && l2){ // Run until both lists are exhausted
            
            // Compare current values
            if (l1->val <= l2->val){ // If l1 has a smaller element or both have same
                l3->next = l1; l1 = l1->next;
            }
            else{ // If l2 has a smaller element
                l3->next = l2; l2 = l2->next;
            }
            l3 = l3->next;
        }
        if (l1 && !l2){ // If l2 is empty now
            l3->next = l1;
        }
        if (!l1 && l2){ // If l1 is empty now
            l3->next = l2;
        }
        
        return head->next;
    }
};
