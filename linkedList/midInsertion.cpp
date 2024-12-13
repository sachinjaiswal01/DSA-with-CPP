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
    //destructor to free memory
    ~Node(){
        int value =this->data;
        if(this -> next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free "<<value<<endl;
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


void insertAtPosition (Node* &tail,Node* &head,int position, int d){
    if(position ==1){
        insertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int cnt =1;
    while(cnt <position){
        temp = temp->next;
        cnt++;
    }

    //inserting at last position
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }
    //creating a node for d.
    Node* nodeToInsert = new Node(d);
    nodeToInsert ->next= temp->next;
    temp->next =nodeToInsert;
}


//Deletion...
void deleteNode(int pos,Node*head){
 //deleting 1st or start node
    if(pos == 1){
        Node* temp = head;
        head=head->next;
        //free memory.
        temp->next = NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node.
        Node* curr = head;
        Node* prev = NULL;
        
        int cnt =1;
        while(cnt < pos){
            prev=curr;
            curr =curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next =NULL;
        delete curr;
    }
}
 
int main(){
    // new node created.
    Node* node1 = new Node(100);  
    // cout<<node1 ->data<<endl;
    // cout<<node1 ->next<<endl;

    // head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    

    insertAtTail(tail,12);
    insertAtTail(tail,14);
  

    insertAtPosition(tail,head,1,21);
    print(head);

    deleteNode(2,head);
    print(head);

    return 0;
}






