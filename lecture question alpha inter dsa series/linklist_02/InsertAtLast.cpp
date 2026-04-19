

#include <iostream>
using namespace std;

// Node class
class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

// LinkedList class
class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;

    // Constructor
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }

    // Insert at End
    void insertAtEnd(int val){
        Node* temp = new Node(val);

        if(size == 0){
            head = tail = temp;
        }
        else{
            tail->next = temp;
            tail = temp;   // IMPORTANT FIX
        }

        size++;
    }

    // Display LinkedList
    void display(){
        Node* temp = head;

        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Main function
int main(){
    LinkedList l1;

    l1.insertAtEnd(10);
    l1.insertAtEnd(56);

    l1.display();

    return 0;
}