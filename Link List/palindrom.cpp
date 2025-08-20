// brute O(2n),O(n)
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        std::stack<int> st;  
        ListNode* temp = head;
        while(temp!=nullptr){
            st.push(temp->val);
            temp = temp->next;
        }
        temp = head;
        while(temp!=nullptr){
            
            if(temp->val != st.top()){
                return false;
            }
            temp = temp->next;
            st.pop();
        }
        return true;
    }
};

// optimal O(2n),O(1)

class Solution {
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        
        ListNode* newHead = reverseList(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next = nullptr;
        
        return newHead;
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* newhead =  reverseList(slow->next);
        ListNode* first = head;
        ListNode* second = newhead;
        while(second!=nullptr){
            if(first->val != second->val){
                 reverseList(newhead);
                 return false;
            }
            first = first->next;
            second = second->next;
        }
         reverseList(newhead);
         return true;
    }
};
