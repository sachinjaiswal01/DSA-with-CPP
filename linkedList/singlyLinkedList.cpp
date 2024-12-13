#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;  // This declares a pointer to another Node object.

    //constructor
    Node(int data){
        this -> data= data;
        this -> next =NULL;
    }
};

void insertAtHead(Node* &head,int d){
    
    //new node create
    Node* temp = new Node(d);
    temp ->next =head;
    head =temp;
}

void print(Node* head){
    Node* temp =head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp =temp->next;
    }
    cout<<endl;
}
void insertAtTail(Node* &tail ,int d){
    Node* temp = new Node(d);
    tail -> next =temp;
    tail= tail->next; 
}
 
int main(){
    // new node created.
    Node* node1 = new Node(100);  
    cout<<node1 ->data<<endl;
    cout<<node1 ->next<<endl;

    // head pointed to node1
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail,12);
    // insertAtHead(head,14);
    insertAtTail(tail,14);
    print(head);

}