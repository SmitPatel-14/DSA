//insert at head
node* insertathead(node* &head,int val){
    node* temp = new node(val,head);
    return temp
}

//insert at the last 
node* insertattail(node* &head, int val) {
    if (head == NULL) {
        return new node(val); 
    }

    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    node* newnode = new node(val);
    temp->next = newnode;
    return head;
}

//insert at kth node

node* insertAtK(node* &head, int val, int k) {
    if (k <= 0) return head; // invalid position

    // Insert at head
    if (k == 1) {
        node* temp = new node(val, head);
        return temp;
    }

    int cnt = 1;
    node* temp = head;

    // Traverse to (k-1)-th node
    while (temp != NULL && cnt < k - 1) {
        temp = temp->next;
        cnt++;
    }

    // If position is valid
    if (temp != NULL) {
        node* newNode = new node(val, temp->next);
        temp->next = newNode;
    }

    return head;
}


//insert by element 

