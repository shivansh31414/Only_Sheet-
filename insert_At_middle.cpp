void insert_middle(int value ,int pos) {
  if (pos ==1 ) {
insertattop(value);
  }
Node* newNode = new Node(val);
Node* temp = head;
for(i =1 ; i<pos-1 && temp != nullptr ; i++ ) {
  temp = temp->next;
};
newNode ->next = temp->next;
temp->next = newNode;
}
