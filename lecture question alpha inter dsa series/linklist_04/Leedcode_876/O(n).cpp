#include <iostream>
using namespace std;

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int len = 0;
        ListNode* temp = head;

        // Count length
        while (temp != NULL) {
            len++;
            temp = temp->next;
        }

        int midindex = len / 2;

        // Move to middle
        ListNode* mid = head;
        for (int i = 1; i <= midindex; i++) {
            mid = mid->next;
        }

        return mid;
    }
};

// Helper function to display list
void display(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Create list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* a = new ListNode(1);
    ListNode* b = new ListNode(2);
    ListNode* c = new ListNode(3);
    ListNode* d = new ListNode(4);
    ListNode* e = new ListNode(5);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    cout << "Linked List: ";
    display(a);

    Solution obj;
    
    ListNode* mid = obj.middleNode(a);

    cout << "Middle Node: " << mid->val << endl;

    return 0;
}