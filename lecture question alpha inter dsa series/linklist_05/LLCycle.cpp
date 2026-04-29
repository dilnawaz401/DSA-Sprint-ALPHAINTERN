#include <iostream>
using namespace std;

// Definition for singly linked list
struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;          // move 1 step
            fast = fast->next->next;   // move 2 step

            if(slow == fast) {
                return true;
            }
        }

        return false;
    }
};

int main() {
    // Create linked list: 3 -> 2 -> 0 -> -4
    ListNode* head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);

    // Create cycle: last node points to node 2
    head->next->next->next->next = head->next;

    Solution obj;

    if(obj.hasCycle(head))
        cout << "Cycle Found";
    else
        cout << "No Cycle";

    return 0;
}