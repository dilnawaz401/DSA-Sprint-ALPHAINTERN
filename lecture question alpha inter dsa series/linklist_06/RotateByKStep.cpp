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

// Function to rotate list by k steps
Node* rotateRight(Node* head, int k) {
    if (!head || !head->next || k == 0) return head;

    // Step 1: Find length
    Node* temp = head;
    int length = 1;

    while (temp->next != NULL) {
        temp = temp->next;
        length++;
    }

    // Step 2: Make circular
    temp->next = head;

    // Step 3: Reduce k
    k = k % length;

    // Step 4: Find new tail (length - k - 1 steps)
    int stepsToNewHead = length - k;
    Node* newTail = head;

    for (int i = 1; i < stepsToNewHead; i++) {
        newTail = newTail->next;
    }

    // Step 5: Break the circle
    Node* newHead = newTail->next;
    newTail->next = NULL;

    return newHead;
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
    // Create list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    int k = 2;

    cout << "Original: ";
    printList(head);

    head = rotateRight(head, k);

    cout << "After rotating by " << k << ": ";
    printList(head);

    return 0;
}