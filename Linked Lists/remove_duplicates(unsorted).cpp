//first approach - O(n2)
//second - sort first and then apply basic O(n) approach overall O(nlogn)
//third - use maps O(n)

class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     map<int, int>m;
     Node *temp = NULL;
     Node *curr = head;
     while(curr!=NULL){
         if(m[curr->data]==0){
             m[curr->data]++;
             temp=curr;
             curr = curr->next;
         }
         else{
             temp->next = curr->next;
             curr = curr->next;
         }
     }
     return head;
    }
};