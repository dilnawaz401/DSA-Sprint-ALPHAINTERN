#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Display function
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Delete target node
void deletetarget(Node* head, Node* target) {
    // If target is head (special case)
    if (head == target) {
        cout << "Cannot delete head with this function" << endl;
        return;
    }

    Node* temp = head;

    // Find node before target
    while (temp->next != target) {
        temp = temp->next;
    }

    // Delete target
    temp->next = target->next;
}

int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    // Linking nodes
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    // Before deletion
    display(a);

    cout << endl;

    // Delete node b (value 20)
    deletetarget(a, b);

    // After deletion
    display(a);

    return 0;
}