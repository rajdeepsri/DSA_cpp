#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *prev;
    Node *next;

    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node(){
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
};

//Traversal
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//Finding Length of Linked List
int getLength(Node* &head){
    int len = 0;
    Node *temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

//Insertion
void insertAtHead(Node* &head, int d){
    if(head==NULL){
        Node *temp = new Node(d);
        head = temp;
    }
    else{
        //create a new node
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &tail, int d){
    if(tail==NULL){
        Node *temp = new Node(d);
        tail = temp;
    }
    else{
        Node *temp = new Node(d);
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
}

void insertAtPos(Node* &head, Node* &tail, int pos, int d){
    //if pos==head
    if(pos==1){
        insertAtHead(head,d);
        return;
    }

    Node *temp = head;
    int count=1;
    while(count < pos-1){
        temp = temp->next;
        count++;
    }

    //if pos==last/tail
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }

    //creating new node
    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    nodeToInsert->prev = temp;
    temp->next = nodeToInsert;
}

void delNode(int pos, Node* &head, Node* &tail){
    if(pos==1){
        Node *temp = head;
        head = temp->next;
        temp->next->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node *prev = NULL;
        Node *curr = head;

        int count=1;
        while(count < pos){
            prev = curr;
            curr = curr->next;
            count++;
        }

        if(curr->next == NULL){ //if tail delete
            prev->next = curr->next;
            curr->prev = NULL;
            tail = prev;
            delete curr;
            return;
        }
        //deleting in-between elements
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head); //before insertion
    cout<<"length is : "<<getLength(head)<<endl;

    //inserting at head
    insertAtHead(head,5);
    print(head);

    //inserting at tail
    insertAtTail(tail,12);
    print(head);

    //inserting 22 at 3rd position
    insertAtPos(head,tail, 4, 22);
    print(head);

    //after deletion of pos=2
    delNode(4,head,tail);
    print(head);

    cout<<"Head at : "<<head->data<<endl;
    cout<<"Tail at : "<<tail->data<<endl;

    return 0;
}