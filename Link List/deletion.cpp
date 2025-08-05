
//deletion of head
class Solution {
public:
    ListNode* deleteHead(ListNode* &head) {
        if (head == NULL) {
            return head;
        }
        ListNode* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
};

//delete tail
node* deletetail(node* &head) {
    if (head == NULL || head->next == NULL) {
        delete head;
        return NULL;
    }
    node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    return head;
}


//delete kth element 
node* deletek(node* &head,int k){
    if(head==NULL){
        return head;
    }
    if(k==1){
        node* temp = head;
        head=head->next;
        delete(temp);
        return head;
    }
    int cnt=1;
    node* temp=head;
    node* previous = NULL;
    while(temp !=NULL){
        if(cnt==k){
            previous->next=temp->next;
            delete temp;
            break;
        }
        previous = temp;
        temp = temp->next;
        cnt++;
    }
    return head;
}
//delete node with out head given
class Solution {
public:
    void deleteNode(ListNode* node) {
        if(node==NULL || node->next==NULL){
            return;
        }
        ListNode* temp = node->next;
        node->val = temp->val;
        node->next = node->next->next;
        delete (temp);
    }
};

