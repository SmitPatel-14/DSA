//insert befor the head
node* insertbeforhead(node* head,int val){
    node* newnode = new node(val,head,nullptr);
    head->back = newnode;
    return newnode;
}

// insert before the tail
node* insertBeforeTail(node* head, int val) {
    // Empty list case
    if (head == nullptr) {
        return new node(val, nullptr, nullptr);
    }

    node* temp = head;
    
    // Traverse to the tail
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    // If there's only one node, insert before it (becomes new head)
    if (temp->back == nullptr) {
        node* newnode = new node(val, temp, nullptr);
        temp->back = newnode;
        return newnode; // newnode is the new head
    }

    // Normal case: insert before tail
    node* prev = temp->back;
    node* newnode = new node(val, temp, prev);
    prev->next = newnode;
    temp->back = newnode;

    return head;
}


