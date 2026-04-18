



// #include<iostream>
// using namespace std;
// class Node{
//     public:
//         int val;
//         Node*next;
//         Node(int val){
//             this->val=val;
//             this->next=NULL;

//         }

// };


// int main(){
//     Node a(10);
//     Node b(20); 
//     Node c(30);
//     Node d(40);
  
  

//     // // forming linklist 

//     a.next=&b;
//     b.next=&c;
//     c.next=&d;

//     Node*temp=&a;
//     while(temp!=NULL){
//         cout<<temp->val<<endl;
//         temp=(temp->next);

//     }  

// }








#include<iostream>
using namespace std;
class Node{
    public:
        int val;
        Node*next;
        Node(int val){
            this->val=val;
            this->next=NULL;

        }

};
void display (Node* head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<endl;
        temp=(temp->next);

    }  
}


int main(){
    Node a(10);
    Node b(20); 
    Node c(30);
    Node d(40);
  
  

    // // forming linklist 

    a.next=&b;
    b.next=&c;
    c.next=&d;
    display(&a);

 

}