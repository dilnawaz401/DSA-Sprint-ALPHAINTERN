#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }  
}

int size(Node* head){
    Node* temp = head;
    int n = 0;
    while(temp != NULL){
        n++;
        temp = temp->next;
    }  
    return n;
}

void displayrec(Node* head){
    if(head == NULL) return;
    cout << head->val << endl;
    displayrec(head->next);
}

void insertAtEnd(Node* &head, int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

// ✅ Correct function
void insertAtHead(Node* &head, int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

int main(){
    Node a(10);
    Node b(20); 
    Node c(30);
    Node d(40);

    a.next = &b;
    b.next = &c;
    c.next = &d;

    Node* head = &a;

    cout << "Original:\n";
    display(head);

    insertAtEnd(head, 50);

    cout << "After insert at end:\n";
    display(head);

    insertAtHead(head, 5);

    cout << "After insert at head:\n";
    display(head);
}