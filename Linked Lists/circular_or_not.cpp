struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        this->data = x;
        this->next = NULL;
    }
    
};
/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
   if(head==NULL) return true;
    if(head==head->next) return true;
    Node* temp = head;
    while(true){
        if(temp->next==NULL) return false;
        temp=temp->next;
        if(temp==head) break;
    }
    return true;
}
