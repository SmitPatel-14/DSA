//brute using map
class Solution {
public:
    bool hasCycle(ListNode *head) {
        map<ListNode*,int>mpp;
        ListNode* temp = head;
        while(temp!=nullptr){
            if(mpp.find(temp)!=mpp.end()){
                return true;
            }
            mpp[temp]=1;
            temp = temp->next;
        }
        return false;
    }
};

// optimal using fast and slow pointer
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=nullptr && fast->next !=nullptr ){
            slow= slow->next;
            fast = fast->next->next;
            if(slow==fast){
                return true;
                break;
            }
        }
        return false;
    }
};


//return node where loop start

//brute
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*,int>mpp;
        ListNode* temp = head;
        while(temp!=nullptr){
            if(mpp.find(temp)!=mpp.end()){
                return temp;
            }
            mpp[temp]=1;
            temp = temp->next;
        }
        return NULL;
    }
};

//optimal


