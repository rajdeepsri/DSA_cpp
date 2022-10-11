/*
Node* sortList(Node *head)
{
    int countZero=0, countOne=0, countTwo=0;
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data==0) countZero++;
        if(temp->data==1) countOne++;
        if(temp->data==2) countTwo++;
        
        temp = head;
        while(countZero){
            temp->data = 0;
            countZero--;
            temp=temp->next;
        }
        while(countOne){
            temp->data = 1;
            countOne--;
            temp=temp->next;
        }
        while(countTwo){
            temp->data = 2;
            countTwo--;
            temp=temp->next;
        }
        return head;
    }
}
*/
//this above solution will change the data
//which is not required, hence we will think of another approach
class Solution
{   
    private:
    void insertAtTail(Node* &tail, Node* curr){
        tail->next=curr;
        tail=curr;
    }
    
    void delNode(Node* &temp){
        temp->next=NULL;
        delete temp;
    }
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        Node* zeroHead = new Node(-1);
        Node* zeroTail = zeroHead;
        Node* oneHead = new Node(-1);
        Node* oneTail = oneHead;
        Node* twoHead = new Node(-1);
        Node* twoTail = twoHead;
        
        Node* curr = head;
        while(curr != NULL){
            if(curr->data==0) insertAtTail(zeroTail ,curr);
            if(curr->data==1) insertAtTail(oneTail ,curr);
            if(curr->data==2) insertAtTail(twoTail ,curr);
            
            curr=curr->next;
        }
        if(oneHead->next!=NULL) zeroTail->next=oneHead->next, oneTail->next=twoHead->next;
        else zeroTail->next=twoHead->next;
        twoTail->next=NULL;
        
        head=zeroHead->next;
        
        delete(zeroHead);
        delete(oneHead);
        delete(twoHead);
        return head;
    }
};