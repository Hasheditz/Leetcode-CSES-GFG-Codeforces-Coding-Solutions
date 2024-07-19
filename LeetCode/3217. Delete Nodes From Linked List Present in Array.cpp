/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(NULL) {}
 *     ListNode(int x) : val(x), next(NULL) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int> st;

        for(auto i : nums) {
            st.insert(i);
        }

       
        if (head == NULL) return NULL;

       
        while(head != NULL && st.find(head->val) != st.end()) {
            head = head->next;
        }

       
        if (head == NULL) return NULL;

        ListNode* temp = head;

        while(temp != NULL && temp->next != NULL) {
            if(st.find(temp->next->val) != st.end()) {
                temp->next = temp->next->next;
            } else {
                temp = temp->next;
            }
        }

        return head;
    }
};
