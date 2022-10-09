//LEETCODE 876. MIDDLE OF THE LINKED LIST
class Solution {
private:
    int getLen(ListNode* head){
        int len=0;
        while(head != NULL){
            head=head->next;
            len++;
        }
        return len;
    }
public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL || head->next == NULL) return head;
        
        int len = getLen(head);
        int ans = len/2 + 1;
        ListNode* temp = head;
        
        int count=1;
        while(count<ans){
            temp = temp->next;
            count++;
        }
        return temp;
    }
};

//OPTIMISED SOLUTION
//story of pro and noob
class Solution {    
public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        if(head->next->next == NULL) return head->next;
        ListNode* pro = head;
        ListNode* noob = head;
        
        while(pro->next != NULL){
            if(pro->next->next != NULL) pro = pro->next->next;
            else pro=pro->next;
            noob=noob->next;
        }
        return noob;
    }
};