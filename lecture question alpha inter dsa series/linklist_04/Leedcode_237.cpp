#include <iostream>
using namespace std;

// Definition of ListNode
class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

// Solution class
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;      // copy next node value
        node->next = node->next->next;    // skip next node
    }
};

// Helper function to print list
void display(ListNode* head) {
    ListNode* temp = head;
    while (temp != NULL) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Creating linked list: 4 -> 5 -> 1 -> 9
    ListNode* a = new ListNode(4);
    ListNode* b = new ListNode(5);
    ListNode* c = new ListNode(1);
    ListNode* d = new ListNode(9);

    a->next = b;
    b->next = c;
    c->next = d;

    cout << "Before deletion: ";
    display(a);

    Solution obj;
    obj.deleteNode(b);  // delete node with value 5

    cout << "After deletion: ";
    display(a);

    return 0;
}
