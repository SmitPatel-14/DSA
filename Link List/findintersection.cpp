//brute 

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*,int>mpp;
        ListNode* temp = headA;
        while(temp!=NULL){
            mpp[temp]=1;
            temp = temp->next;
        }
        temp = headB;
        while(temp!=NULL){
            if(mpp.find(temp)!=mpp.end()){
                return temp;
            }
            temp = temp ->next;
        }
        return NULL;
    }
};

//better

class Solution {
public:
    ListNode* collisionpoint(ListNode* smallhead,ListNode* largehead,int d){
        while(d){
            largehead = largehead -> next;
            d--;
        }
        while(smallhead!=largehead){
            smallhead = smallhead->next;
            largehead = largehead->next;
        }
        return smallhead; //or youcan returb largehead as well.
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp = headA;
        int n1=0,n2=0;
        while(temp!=nullptr){
            n1++;
            temp = temp->next;
        }
        temp = headB;
         while(temp!=nullptr){
            n2++;
            temp = temp->next;
        }
        if(n1<n2){
            return collisionpoint(headA,headB,n2-n1);
        }
        else{
            return collisionpoint(headB,headA,n1-n2);
        }
    }
};

//optimal

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == nullptr || headB == nullptr) {
            return nullptr;
        }

        ListNode* temp1 = headA;
        ListNode* temp2 = headB;

        while (temp1 != temp2) {
            // Move temp1
            if (temp1 == nullptr) {
                temp1 = headB;
            } else {
                temp1 = temp1->next;
            }

            // Move temp2
            if (temp2 == nullptr) {
                temp2 = headA;
            } else {
                temp2 = temp2->next;
            }
        }

        return temp1; // will be intersection node or nullptr
    }
};


