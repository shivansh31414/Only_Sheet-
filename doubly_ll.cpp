struct DoublyNode {
    int data;
    DoublyNode* next;
    DoublyNode* prev;
    
    DoublyNode(int val) : data(val), next(nullptr), prev(nullptr) {}
};
int main() {
  DoublyNode* head = new DoublyNode(10);
  DoublyNode* second = new DoublyNode(20);
  DoublyNode* third = new DoublyNode(30);
  head->next = second;
 second->next = third;

  second->prev= first;
  third->prev=second;
// Forward traversal
    cout << "Forward: ";
    DoublyNode* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    
    // Backward traversal
    cout << "Backward: ";
    temp = third;
    while (temp != nullptr) {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << "NULL" << endl;
    
    return 0;
}
