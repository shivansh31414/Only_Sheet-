#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;
    
    LinkedList() : head(nullptr) {};
    void insertatHead(int val){
      Node* newNode = new Node(val);
      newNode->next = head;
      head = newNode;
    }
   void insertatEnd(int val) {
     Node* newNode = new Node(val);
    if (head == nullptr) {
      head = newNode;
    }
 Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
