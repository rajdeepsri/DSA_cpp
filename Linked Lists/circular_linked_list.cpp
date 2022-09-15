//singly circular linked list
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
    }
};

//insertion at head
void insertNode(Node* &tail, int element, int d){
    //empty list
    if(tail == NULL){
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        //assume element is present
        //non-empty list
        Node *temp = new Node(d);
        Node *curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
    }
}

void delNode(Node* &tail, int element){
    if(tail == NULL){ //empty list
        cout<<"List is empty! "<<endl;
        return;
    }
    else{ //non-empty
        Node *prev = tail;
        Node *curr = prev->next;
        
        while(curr->data != element){
            prev = curr;
            curr = curr->next;
        }
        //for 1 node LL
        if(curr==prev){
            tail=NULL;
        }
        // >1 node LL
        if(tail == curr){
            tail = prev;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node* &tail){

    if(tail==NULL){ //empty list
        cout<<"List is Empty";
        return;
    }
    Node *temp = tail;
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    } while(tail != temp);
    cout<<endl;
}

int main(){
    Node *tail = NULL;

    //insertion in empty list
    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,3,10);
    print(tail);

    insertNode(tail,5,15);
    print(tail);

    delNode(tail,3);
    print(tail);







    return 0;
}