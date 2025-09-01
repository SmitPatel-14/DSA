// iterative  O(3n),O(1)
/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/

class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* temp = head;
        ListNode* prev = NULL;
        ListNode* front;
        while(temp != NULL){
            front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }

    ListNode *addOne(ListNode *head) {
        head = reverse(head);
        ListNode* temp = head;
        int carry = 1;

        while(temp != NULL){
            temp->val += carry;
            if(temp->val < 10){
                carry = 0;
                break;
            }
            else{
                temp->val = 0;
                carry = 1;
            }
            temp = temp->next;
        }

        if(carry == 1){
            ListNode* newnode = new ListNode(1);
            head = reverse(head);
            newnode->next = head;
            return newnode;
        }
        else{
            head = reverse(head);
            return head;
        }
    }
};


//recurcive with backtracking

/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/

class Solution {
public:
    int helper(ListNode* temp){
        if(temp == NULL){
            return 1;
        }
        int carry = helper(temp->next);
        temp->val += carry;
        if(temp->val < 10){
            return 0;
        }
        else{
            temp->val = 0;
            return 1;
        }
    }
    ListNode *addOne(ListNode *head) {
        int carry = helper(head);
        if(carry == 1){
            ListNode* newnode = new ListNode(1);
            newnode->next = head;
            head = newnode; 
        }
        return head;
    }
};