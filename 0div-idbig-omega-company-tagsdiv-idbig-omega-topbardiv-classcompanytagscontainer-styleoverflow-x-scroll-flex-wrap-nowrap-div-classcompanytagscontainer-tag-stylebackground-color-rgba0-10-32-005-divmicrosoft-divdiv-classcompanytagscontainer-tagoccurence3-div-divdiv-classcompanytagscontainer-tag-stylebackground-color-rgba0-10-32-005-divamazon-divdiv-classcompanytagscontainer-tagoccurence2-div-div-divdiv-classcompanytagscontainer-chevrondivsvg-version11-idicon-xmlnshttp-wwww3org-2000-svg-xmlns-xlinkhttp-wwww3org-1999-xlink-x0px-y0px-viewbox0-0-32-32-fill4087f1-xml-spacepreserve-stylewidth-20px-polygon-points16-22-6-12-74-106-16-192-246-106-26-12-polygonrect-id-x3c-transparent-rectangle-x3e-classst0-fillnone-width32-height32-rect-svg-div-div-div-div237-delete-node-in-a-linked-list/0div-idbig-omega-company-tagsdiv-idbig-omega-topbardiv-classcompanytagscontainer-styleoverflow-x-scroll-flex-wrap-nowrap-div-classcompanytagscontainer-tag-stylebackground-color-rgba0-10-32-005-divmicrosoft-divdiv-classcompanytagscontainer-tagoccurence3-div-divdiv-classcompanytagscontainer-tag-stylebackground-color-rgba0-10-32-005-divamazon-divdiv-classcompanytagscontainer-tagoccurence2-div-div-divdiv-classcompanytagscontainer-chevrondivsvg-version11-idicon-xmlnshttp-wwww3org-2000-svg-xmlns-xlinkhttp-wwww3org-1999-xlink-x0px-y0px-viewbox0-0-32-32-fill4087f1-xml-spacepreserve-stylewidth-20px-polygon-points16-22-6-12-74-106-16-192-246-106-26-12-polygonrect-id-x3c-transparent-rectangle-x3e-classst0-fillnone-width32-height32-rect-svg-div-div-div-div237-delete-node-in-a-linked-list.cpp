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
    void deleteNode(ListNode* node) {
        while(node -> next -> next != NULL){
            node -> val = node -> next -> val;
            node = node -> next;
        }
        ListNode* temp = new ListNode();
        node -> val = node -> next -> val;
        temp = node -> next;
        node -> next = NULL;
        delete temp;
    }
};