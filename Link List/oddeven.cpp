
// brute
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        vector<int> arr;
        ListNode* temp = head;
        while(temp!=NULL && temp->next !=NULL){
            arr.push_back(temp->val);
            temp=temp->next->next;
        }
        if(temp){
            arr.push_back(temp->val);
        }
        temp = head->next;
        while(temp!=NULL && temp->next !=NULL){
            arr.push_back(temp->val);
            temp=temp->next->next;
        }
        if(temp){
            arr.push_back(temp->val);
        }
        int i = 0;
        temp = head;
        while(temp!=NULL){
            temp->val = arr[i];
            temp = temp->next;
            i++;
        }
        return head;
    }
};

//optimal
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr ||head->next == nullptr){
            return head;
        }
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenhead = head->next;
        while(even != nullptr && even->next != nullptr){
            odd->next = odd->next->next;
            even->next = even->next->next;
            odd=odd->next;
            even  = even->next;
        }
        odd->next = evenhead;
        return head;
    }
};