#include <iostream>   // header line for input/output
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

// display function
void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

// insert at end
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

// insert at specific position
void insertAtPosition(Node* &head, int val, int pos){
    if(pos == 0){
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;

    for(int i = 0; i < pos - 1; i++){
        if(temp == NULL){
            cout << "Position out of range\n";
            return;
        }
        temp = temp->next;
    }
    

    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
}

int main(){
    Node* head = NULL;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);

    cout << "Original List:\n";
    display(head);

    cout << "After inserting 25 at position 2:\n";
    insertAtPosition(head, 25, 2);
    display(head);

    return 0;
}