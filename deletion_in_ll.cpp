#include <iostream>
using namespace std;

struct Node*{
  int data;
  Node* next;
  Node(int val) :data(val),next(nullptr){}
};
class LL {
public :
Node*  head;
LL () : head(nullptr) {}
void dlete_from_head() {
  (if head == nullptr) return;
  node* temp = head;
  delete head;
  head= head->next;
}
void_delete_from_end() {
 (if head == nullptr) return;
  if (head->next == nullptr) {
      delete head;
      head = nullptr;
      return;
  }
 
        Node* temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }
    
    // Delete by value - O(n)
    void deleteValue(int val) {
        if (head == nullptr) return;
        
        // If head has the value
        if (head->data == val) {
            deleteFromHead();
            return;
        }
        
        Node* temp = head;
        while (temp->next != nullptr && temp->next->data != val) {
            temp = temp->next;
        }
        
        if (temp->next == nullptr) return;  // Value not found
        
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
    
    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;
  

