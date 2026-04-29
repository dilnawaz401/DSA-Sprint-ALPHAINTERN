#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Merge two sorted lists
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    // Dummy node
    ListNode* dummy = new ListNode(-1);
    ListNode* tail = dummy;

    while (l1 != NULL && l2 != NULL) {
        if (l1->val <= l2->val) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    // Attach remaining nodes
    if (l1 != NULL) {
        tail->next = l1;
    } else {
        tail->next = l2;
    }

    return dummy->next;
}

// Print list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // List 1: 1 -> 2 -> 4
    ListNode* l1 = new ListNode(1);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(4);

    // List 2: 1 -> 3 -> 4
    ListNode* l2 = new ListNode(1);
    l2->next = new ListNode(3);
    l2->next->next = new ListNode(4);

    cout << "List 1: ";
    printList(l1);

    cout << "List 2: ";
    printList(l2);

    ListNode* merged = mergeTwoLists(l1, l2);

    cout << "Merged List: ";
    printList(merged);

    return 0;
}