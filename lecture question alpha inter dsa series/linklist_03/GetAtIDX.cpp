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
            tail = temp;
        }

        size++;
    }

    // ✅ FIXED: closed function properly
    int getAtIdx(int idx){
        if(idx < 0 || idx >= size){
            cout << "Index out of range" << endl;
            return -1;  
        }
        else if (idx == 0) return head->val;
        else if (idx == size - 1) return tail->val;
        else{
            Node* temp = head;
            for(int i = 0; i < idx; i++){
                temp = temp->next;
            }
            return temp->val;
        }
    } // 🔥 THIS WAS MISSING

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
    l1.insertAtEnd(50);
    l1.insertAtEnd(58);
    l1.insertAtEnd(53);

    l1.display();

    cout << "Element at index 1: " << l1.getAtIdx(4) << endl;

    return 0;
}