#include <iostream>
using namespace std;

// Node class
class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Function to detect cycle and return starting node
ListNode* detectCycle(ListNode* head) {
    if (!head || !head->next) return NULL;

    ListNode* slow = head;
    ListNode* fast = head;

    // Step 1: Detect cycle
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            // Step 2: Find start of cycle
            slow = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            return slow; // starting node
        }
    }

    return NULL; // no cycle
}

// Function to get index of node
int getIndex(ListNode* head, ListNode* target) {
    int index = 0;
    while (head != NULL) {
        if (head == target) return index;
        head = head->next;
        index++;
    }
    return -1;
}

int main() {
    // Create list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(3);
    ListNode* fourth = new ListNode(4);
    ListNode* fifth = new ListNode(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Create cycle: 5 -> 3 (index = 2)
    fifth->next = third;

    // Detect cycle start
    ListNode* cycleStart = detectCycle(head);

    if (cycleStart != NULL) {
        int index = getIndex(head, cycleStart);
        cout << "Cycle starts at index: " << index << endl;
    } else {
        cout << "No cycle detected." << endl;
    }

    return 0;
}