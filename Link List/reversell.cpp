
//brute O(2n) use extra space stack which takes o(n)
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        stack<int> st;

        // Push values into stack
        while (temp != nullptr) {
            st.push(temp->val);
            temp = temp->next;
        }

        // Pop values and assign back to nodes
        temp = head;
        while (!st.empty()) {
            temp->val = st.top();
            st.pop();
            temp = temp->next;
        }

        return head;
    }
};

//optimal in one iteration O(n) (iterative)
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){
            return head;
        }
        ListNode* prev  =NULL;
        ListNode* temp = head;
        ListNode* front = temp->next;
        while(temp!=nullptr){
            front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
};