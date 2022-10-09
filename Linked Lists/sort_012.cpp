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
