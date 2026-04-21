#include <iostream>   // ✅ header line
using namespace std;

// Node class
class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = nullptr;   // modern C++
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
        head = tail = nullptr;
        size = 0;
    }

    // Insert at End
    void insertAtEnd(int val){
        Node* temp = new Node(val);

        if(size == 0){
            head = tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    // Delete at Index
    void deleteAtIdx(int idx){
        if(idx < 0 || idx >= size){
            cout << "Index out of range\n";
            return;
        }

        // Case 1: delete head
        if(idx == 0){
            Node* temp = head;
            head = head->next;
            delete temp;

            if(head == nullptr) tail = nullptr;
        }

        // Case 2: delete tail
        else if(idx == size - 1){
            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = nullptr;
        }

        // Case 3: middle
        else{
            Node* temp = head;
            for(int i = 0; i < idx - 1; i++){
                temp = temp->next;
            }

            Node* delNode = temp->next;
            temp->next = delNode->next;
            delete delNode;
        }

        size--;
    }

    // Display
    void display(){
        Node* temp = head;
        while(temp != nullptr){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};


int main(){
    LinkedList l1;

    l1.insertAtEnd(10);
    l1.insertAtEnd(20);
    l1.insertAtEnd(30);
    l1.insertAtEnd(40);

    cout << "Original List:\n";
    l1.display();

    l1.deleteAtIdx(1);

    cout << "After deleting index 2:\n";
    l1.display();

    return 0;
}