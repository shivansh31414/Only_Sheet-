#include <unordered_map>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    Node(int _val) { val = _val; next = nullptr; random = nullptr; }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return nullptr;

        unordered_map<Node*, Node*> mp;

        // First pass: create all nodes
        Node* curr = head;
        while (curr) {
            mp[curr] = new Node(curr->val);
            curr = curr->next;
        }

        // Second pass: assign next and random
        curr = head;
        while (curr) {
            mp[curr]->next = mp[curr->next];     // may be nullptr
            mp[curr]->random = mp[curr->random]; // may be nullptr
            curr = curr->next;
        }

        return mp[head];
    }
};
