
int main() {
    // Create nodes
    Node* head = new Node(10);      // First node
    Node* second = new Node(20);    // Second node
    Node* third = new Node(30);     // Third node
    
    // Link the nodes
    head->next = second;
    second->next = third;
    // third->next is already nullptr
    
    // Traverse and print
    cout << "Linked List: ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    // Output: 10 -> 20 -> 30 -> NULL
    
    return 0;
}
