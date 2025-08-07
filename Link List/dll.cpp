//constructor for dll
class node{
    public
    int data;
    node* next;
    node* back;
    public 
    node(int data,node* next,node* back){
        data = d1;
        next = n1;
        back = b1;
    }
    public 
    node(int data){
        data = d1;
        next = NULL;
        back = NULL;

    }
    }


//array to dll
node* arraytodll(vector<int> &nums) {
    if (nums.empty()) return NULL;

    node* head = new node(nums[0]);
    node* prev = head;

    for (int i = 1; i < nums.size(); i++) {
        node* temp = new node(nums[i], NULL, prev);
        prev->next = temp;
        prev = temp;
    }

    return head;
}


// deleting head
node* deletehead(node* &head) {
    if (head == NULL) {
        return NULL;
    }
    if (head->next == NULL) {
        delete head;
        head = NULL;
        return NULL;
    }

    node* temp = head;
    head = head->next;
    head->back = NULL;
    delete temp;
    return head;
}

//delete tail
node* deletetail(node* &head) {
    if (head == NULL) {
        return NULL;
    }

    if (head->next == NULL) {
        delete head;
        head = NULL;
        return NULL;
    }

    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    node* prev = temp->back;
    prev->next = NULL;
    delete temp;
    return head;
}

//k tht element
node* deletekth(node* &head, int k) {
    if (head == NULL || k <= 0) return head;

    node* temp = head;
    int cnt = 1;

    while (temp != NULL && cnt < k) {
        temp = temp->next;
        cnt++;
    }

    if (temp == NULL) return head; // k is out of bounds

    node* prev = temp->back;
    node* front = temp->next;

    // Case: only one node
    if (prev == NULL && front == NULL) {
        delete temp;
        head = NULL;
    }
    // Case: delete head
    else if (prev == NULL) {
        head = front;
        front->back = NULL;
        delete temp;
    }
    // Case: delete tail
    else if (front == NULL) {
        prev->next = NULL;
        delete temp;
    }
    // Case: middle node
    else {
        prev->next = front;
        front->back = prev;
        delete temp;
    }

    return head;
}

//deleteing node
void deletenode(node* &temp){
    node* prev = temp->back;
    node* front = temp->next;
    if(front==NULL){
        prev->next=NULL;
        temp->back = NULL;
        delete(temp);
        return;
    }
    prev->next = front;
    front->back = prev;
    free(temp);
    return;
}

// insert before head
node* 