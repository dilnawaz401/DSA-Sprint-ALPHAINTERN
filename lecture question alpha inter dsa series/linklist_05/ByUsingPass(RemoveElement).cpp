#include <iostream>
using namespace std;

// Definition for singly-linked list
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp = head;

        while(temp != NULL) {
            count++;
            temp = temp->next;
        }

        // If first node delete karna ho
        if(count == n) {
            return head->next;
        }

        temp = head;

        for(int i = 1; i < count - n; i++) {
            temp = temp->next;
        }

        temp->next = temp->next->next;

        return head;
    }
};

// Print linked list
void printList(ListNode* head) {
    while(head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Create list: 1->2->3->4->5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int n = 2;

    Solution obj;
    head = obj.removeNthFromEnd(head, n);

    printList(head);

    return 0;
}