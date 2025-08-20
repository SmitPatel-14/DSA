//brute
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr){
            return head;
        }
        int cnt  = 0;
        ListNode* temp = head;
        while(temp!=nullptr){
            cnt++;
            temp = temp->next;
        }
        if(cnt==1){
           
            return nullptr;
        }
        int result = cnt/2;
        temp  = head;
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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == nullptr || head->next==nullptr){
            return nullptr;
        }
       ListNode* slow = head;
       ListNode* fast = head->next->next;;
      
       while(fast!=nullptr && fast->next !=nullptr){
        fast = fast->next->next;
        slow = slow->next;

       } 
       ListNode* delnode = slow->next;
       slow->next = delnode->next;
       delete(delnode);
       return head;
    }
};