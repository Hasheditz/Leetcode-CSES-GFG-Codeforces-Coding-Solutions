class Solution {
public:
    void deleteNode(ListNode* node) {

        ListNode* temp = node -> next -> next;
        node ->val = node -> next -> val;
        node -> next = temp;
        
    }
};