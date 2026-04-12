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
int main(){
    Node a(10);
    Node b(20); 
    Node c(30);
    Node d(40);
    // cout<<b.val;
  

    // // forming linklist 

    a.next=&b;
    b.next=&c;
    c.next=&d;
   
    cout<<(a.next)->val;
  

}

















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
int main(){
    Node a(10);
    Node b(20); 
    Node c(30);
    Node d(40);
  
  

    // // forming linklist 

    a.next=&b;
    b.next=&c;
    c.next=&d;
    a.next->val=70;
    cout <<b.val; 

}
















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
int main(){
    Node a(10);
    Node b(20); 
    Node c(30);
    Node d(40);
  
  

    // // forming linklist 

    a.next=&b;
    b.next=&c;
    c.next=&d;
    a.next->val=70;

    cout <<((a.next)->next)->val;    

}

















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
int main(){
    Node a(10);
    Node b(20); 
    Node c(30);
    Node d(40);
  
  

    // // forming linklist 

    a.next=&b;
    b.next=&c;
    c.next=&d;

    Node temp=a;
    while(temp.next!=NULL){
        cout<<temp.val<<endl;
        temp=*(temp.next);

    }  

}