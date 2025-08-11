//optimal O(n),O(1)

class Solution {
public:
    int findLengthOfLoop(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        int cnt = 1;
        while(fast!=nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
              ListNode* temp = slow->next;
              while(temp!=slow){
                cnt++;
                temp = temp->next;
              }
              return cnt;
            }
        }
        return 0;
    }
};