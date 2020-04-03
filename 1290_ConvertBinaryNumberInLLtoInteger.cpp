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
    int getDecimalValue(ListNode* head) {
        
        int power{0};
        int number{0};
        auto root = head;
        while (head != NULL){
            cout << head->val << " ";
            head = head->next;
            power++;
        }
        
        cout << "\n"<< power << endl; // Length of linked list

        --power;
        while (power >= 0){
            
            number += root->val*pow(2,power);
            power--;
            root = root->next;
        }
        
        return number;
        
    }
};
