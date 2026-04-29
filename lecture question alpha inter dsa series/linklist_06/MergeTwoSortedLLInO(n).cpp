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

// Merge (concatenate)
Node* mergeLists(Node* l1, Node* l2) {
    if (!l1) return l2;

    Node* temp = l1;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = l2;
    return l1;
}

// Print list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // List1: 3 -> 1 -> 5
    Node* l1 = new Node(3);
    l1->next = new Node(1);
    l1->next->next = new Node(5);

    // List2: 2 -> 4
    Node* l2 = new Node(2);
    l2->next = new Node(4);

    cout << "List1: ";
    printList(l1);

    cout << "List2: ";
    printList(l2);

    Node* merged = mergeLists(l1, l2);

    cout << "Merged List: ";
    printList(merged);

    return 0;
}