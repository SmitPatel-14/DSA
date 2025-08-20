//brute
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt  = 0;
        ListNode* temp = head;
        while(temp!=nullptr){
            cnt++;
            temp = temp->next;
        }
        if(cnt==n){
            ListNode* newhead = head->next;
            delete(head);
            return newhead;
        }
       int  result = cnt-n;
        temp = head;
      
        while(temp!=nullptr){
            result--;
            if(result==0){
                break;
            }
            temp = temp->next;
        }
        ListNode* delnode = temp->next;
        temp->next = delnode->next;
        delete(delnode);
        return head;
    }
};

//optimal
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        for(int i = 0;i<n;i++){
            fast = fast->next;
        }
        if (fast == nullptr) {
            ListNode* delnode = head;
            head = head->next;
            delete delnode;
            return head;
        }
        ListNode* slow = head;
        while(fast->next != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        ListNode* delnode = slow->next;
        slow->next = delnode->next;
        delete(delnode);
        return head;
    }
};