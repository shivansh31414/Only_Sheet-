#include<iostream.h>
using namespace std;
// Define the Node structure
struct Node {
    int data;      // Data part
    Node* next;    // Pointer to next node
    
    // Constructor for easy node creation
    Node(int value) {
        data = value;
        next = nullptr;  // NULL in older C++
    }
};
