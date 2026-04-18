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

int size(Node* head){   // ✅ fixed parameter
    Node* temp = head;
    int n = 0;
    while(temp != NULL){
        n++;            // ✅ fixed semicolon
        temp = temp->next;
    }  
    return n;
}
void displayrec(Node*head){
    if(head==NULL) return;
    displayrec(head->next);
    
    cout<< head->val<<endl;
    
}

int main(){
    Node a(10);
    Node b(20); 
    Node c(30);
    Node d(40);

    // forming linked list 
    a.next = &b;
    b.next = &c;
    c.next = &d;

    // display(&a);   // ✅ pass address

    cout << "Size: " << size(&a)<<endl;   // ✅ print result
    displayrec(&a);
}