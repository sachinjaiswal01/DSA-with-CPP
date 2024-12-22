#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next =NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

//Insertion in circular linked list...
void insertNode(Node* &tail,int element,int d){
    //for empty list
    if(tail ==NULL){
        Node* newNode  = new Node(d);
        tail= newNode;
        newNode-> next =newNode;
    }
    //for Non-empty list
    else{
        Node* curr = tail;
        do{
            if(curr -> data ==element){
                break;
            }
            curr = curr->next;
        }
        while(curr != tail);

    //elemetn found ----> curr is representing elelment wala node

    Node* temp = new Node(d);
    temp ->next= curr -> next;
    curr->next = temp;
    }
}
//deletion...
void deleteNode(Node* tail,int value){
    //1. expty list
    if(tail== NULL){
        cout<<"List is empty , check again !"<<endl;
        return;
    }
    //2.non-empty
    else{
        //assumong value is present
        Node* prev =tail;
        Node* curr = prev->next;

        
        while(curr ->data !=value){
            prev= curr;
            curr=curr->next;
        }
        prev->next =curr->next;

        // if 1 node 
        if(curr == prev){
            tail= NULL;
        }
        // 2 Node linked list.
        if(tail == curr){
            tail =prev;
        }
        curr->next=NULL;
        delete curr;  //free memory
    }
}
//print function...
void print(Node* tail){

    Node* temp =tail;
    if(tail ==NULL){
        cout<<"List is empty!";
        return;
    }

    do{
        cout<< temp->next->data<<" ";
        temp= temp->next;
    }while(temp != tail);
    cout<<endl;
}

int main(){
    Node* tail =NULL;

    insertNode(tail,5,7);  // Insert 3 into an empty list 
    print(tail);

    insertNode(tail,3,5);    // Insert 5 after 3
    print(tail);
    insertNode(tail,5,6);  // Insert 3 into an empty list 
    print(tail);

    insertNode(tail,3,7);    // Insert 5 after 3
    print(tail);

    deleteNode(tail,7);
    print(tail);

    return 0;
}