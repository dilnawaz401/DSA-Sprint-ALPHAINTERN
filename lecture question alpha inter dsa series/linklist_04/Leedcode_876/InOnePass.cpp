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

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        // One pass traversal
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;          // move 1 step
            fast = fast->next->next;    // move 2 steps
        }

        return slow; // middle node
    }
};

// Helper function to print list from a node
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Create linked list: 1 -> 2 -> 3 -> 4 -> 5 -> 6
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(6);

    Solution obj;
    ListNode* mid = obj.middleNode(head);

    cout << "Middle Node onwards: ";
    printList(mid);

    return 0;
}