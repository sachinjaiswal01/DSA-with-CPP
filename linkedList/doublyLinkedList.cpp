#include<iostream>
using namespace std;

class Node{
    public:
    int data;       // data
    Node* prev;    // pointers
    Node* next;   // pointers

    //Constructor

    Node(int d){
        //Node crearion with NULL and d data.
        this->data = d;
        this->prev = NULL;  //initialize
        this->next = NULL;  // initialize
    }
    ~Node(){
        int val = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free "<<val<<endl;
    }
};

// print linked list.
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

// Get length of linked list
int getLength(Node* head){
    int len =0 ;
    Node* temp =head;

    while(temp != NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
// insert a node at head;

void insertAtHead(Node* &head ,int d){
    //if empty list...
    if(head == NULL){
        Node* temp= new Node(d);
        head = temp;
    }

    else{
    Node* newNode = new Node(d); // Creating new node.
    newNode-> next = head;
    head->prev = newNode;
    head =newNode;
    }
}

 // insertion at tail
void insertAtTail(Node* tail,int d){

    Node* temp = new Node(d); //create a node.
    tail->next = temp;
    temp->prev = tail;
    temp = tail;
}

// inserting at any position.
void insertAtPosition(Node* &tail,Node* &head,int position,int d){
    if(position ==1){
        insertAtHead(head,d);
        return;
    }
    Node* temp =head;
    int cnt =1;
    while(cnt < position-1){
        temp= temp->next;
        cnt++;
    }

    //inserting at last position...
    if(temp->next ==NULL){
        insertAtTail(tail,d);
        return;
    }

    //creating a node for d.
    Node* newNode = new Node(d);
    //insertin at middle...
    newNode ->next = temp->next;
    temp->next->prev = newNode;
    temp->next =newNode;
    newNode->prev = temp;

}

//Deletion...
void deleteNode(int pos,Node*head){
 //deleting 1st or start node
    if(pos == 1){
        Node* temp = head;
        temp->next->prev=head;
        head = temp->next;
        temp->next= NULL;
        delete temp;  // free memory
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
        curr->prev =NULL;
        prev->next =curr->next;
        curr ->next =NULL;
        delete curr;
    }
}

int main(){
    Node* newNode = new Node(5);
    Node* head = newNode;
    Node* tail = newNode;

    insertAtHead(head,11);  // inserting 11 at head;
    print(head); 
    insertAtHead(head,12);  // inserting 12 at head;
    print(head); 
    insertAtHead(head,13);  // inserting 13 at head;
    print(head); 
    insertAtHead(head,14);  // inserting 14 at head;
    print(head); 
    insertAtHead(head,15);  // inserting 15 at head;
    print(head); 
    insertAtHead(head,16);  // inserting 16 at head;
    print(head); 

    insertAtTail(tail,111); 
    print(head); 
    insertAtPosition(tail,head,2,100);
    print(head);
    insertAtPosition(tail,head,1,101);
    print(head);
    // cout<<"length of linked list is:"<<getLength(head)<<endl;

    deleteNode(6,head);
    print(head);

    cout<<"length of linked list is:"<<getLength(head);

    return 0;
}