/*
Definition of doubly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode()
    {
        val = 0;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1, ListNode *next1, ListNode *prev1)
    {
        val = data1;
        next = next1;
        prev = prev1;
    }
};
*/

class Solution {
public:
    ListNode* deleteAllOccurrences(ListNode* head, int target) {
        ListNode* temp = head;

        while(temp != NULL) {
            if(temp->val == target) {
                ListNode* nextnode = temp->next;
                ListNode* prevnode = temp->prev;

                if(temp == head) {
                    head = nextnode;   // move head forward
                    if(head) head->prev = NULL;
                } 
                else {
                    if(prevnode) prevnode->next = nextnode;
                    if(nextnode) nextnode->prev = prevnode;
                }

                delete temp;
                temp = nextnode;  // move to next node
            }
            else {
                temp = temp->next;
            }
        }

        return head;
    }
};
