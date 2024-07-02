class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        ListNode* cur = head;
        stack<ListNode*> st;
        
        while (cur != NULL) {
            while (!st.empty() && st.top()->val < cur->val) {
                st.pop();
            }
            st.push(cur);
            cur = cur->next;
        }
        
        ListNode* nxt = NULL;
        while (!st.empty()) {
            cur = st.top();
            st.pop();
            cur->next = nxt;
            nxt = cur;
        }
        
        return cur;
    }
};