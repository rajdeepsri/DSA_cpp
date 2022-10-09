#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next; //pointer of Node type

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    ~Node(){
        int value = this->data;
        //freeing memory
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory freed of : "<<value<<endl;
    }
};

void insertAtHead(Node* &head, int d){
    //create a new node
    Node *temp = new Node(d);
    temp->next = head;
    head = temp; //update head
}

void insertAtTail(Node* &tail, int d){
    //create a new node
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp; //update tail
}

void insertAtPos(Node* &head,Node* &tail, int pos, int d){
    //handling starting case
    if(pos==1){
        insertAtHead(head,d);
        return;
    }

    //creating nodetoinsert
    Node *nodeToInsert = new Node(d);

    Node *temp = head;
    int count=1;
    while(count < pos-1){
        temp = temp->next;
        count++;
    }

    //handling last node case -- update tail
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

}

void delNode(int pos, Node* &head, Node* &tail){
    if(pos==1){ //head/starting node
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    else{
        //any middlle or last node
        int count = 1;
        Node* prev = NULL;
        Node* curr = head;
        while(count < pos){
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        if(curr->next==NULL){
            tail = prev;
        }
        delete curr;
    }

}

void print(Node* &head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    //creating new node with data=10
    Node *node1 = new Node(10);
    // cout<<node1 -> data<<endl; //similar to (*node1).data
    // cout<<node1 -> next<<endl;

    //pointing head to node1
    Node *head = node1;
    Node *tail = node1;

    print(head); //before insertion

    //inserting at head
    insertAtHead(head,5);

    //after insertion at head
    print(head);

    //inserting at tail
    insertAtTail(tail,12);

    //after inserting at tail
    print(head);

    //inserting 22 at 3rd position
    insertAtPos(head, tail, 2, 22);

    //after inserting 22
    print(head);

    cout<<"Head at : "<<head->data<<endl;
    cout<<"Tail at : "<<tail->data<<endl;

    //after deletion of pos=2
    delNode(4,head,tail);
    print(head);

    cout<<"Head at : "<<head->data<<endl;
    cout<<"Tail at : "<<tail->data<<endl;

    return 0;
}
