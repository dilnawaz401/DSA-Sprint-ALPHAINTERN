#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Remove duplicates from sorted list
Node* removeDuplicates(Node* head) {
    if (!head) return head;

    Node* curr = head;

    while (curr->next != NULL) {
        if (curr->val == curr->next->val) {
            Node* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        } else {
            curr = curr->next;
        }
    }

    return head;
}

// Print linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Sorted list: 1 -> 1 -> 2 -> 3 -> 3 -> 4
    Node* head = new Node(1);
    head->next = new Node(1);
    head->next->next = new Node(2);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(3);
    head->next->next->next->next->next = new Node(4);

    cout << "Original List: ";
    printList(head);

    head = removeDuplicates(head);

    cout << "After Removing Duplicates: ";
    printList(head);

    return 0;
}