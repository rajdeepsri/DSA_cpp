/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
int getLen(ListNode* head){
    int len=0;
    while(head!=NULL){
        head=head->next;
        len++;
    }
    return len;
}
ListNode* add(ListNode* &l1, ListNode* &l2){
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;
        ListNode* prev = NULL;
        
        int sum=0;
        int carry=0;
        
        while(curr1!=NULL && curr2!=NULL){
            sum=curr1->val + curr2->val + carry;
            if(sum<10){
                curr1->val = sum;
                carry=0;
            }
            else{
                curr1->val = sum%10;
                carry=1;
            }
            prev=curr1;
            curr1=curr1->next;
            curr2=curr2->next;
        }
        
        while(curr1!=NULL){
            sum=curr1->val + carry;
            if(sum<10){
                curr1->val = sum;
                carry=0;
            }
            else{
                curr1->val = sum%10;
                carry=1;
            }
            prev=curr1;
            curr1=curr1->next;
        }
    
        if(carry!=0){
            ListNode* temp = new ListNode(carry);
            prev->next=temp;
        }
    return l1;
}
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(getLen(l1) > getLen(l2)) return add(l1,l2);
        return add(l2,l1);
    }
};
//TC - O(M+N), SC=O(1)
//a more cleaner solution
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode(0);
        ListNode *curr = dummy;
        int carry = 0;
        
        while(l1 != NULL || l2 != NULL || carry == 1){
            int sum = 0;
            if(l1 != NULL){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                sum += l2->val;
                l2 = l2->next;
            }
            sum += carry;
            carry = sum/10;
            ListNode *node = new ListNode(sum % 10);
            curr->next = node;
            curr = curr->next;
        }
        return dummy->next;
    }
};
//TC - O(M+N), SC=O(max(M,N))
//great solution link - https://leetcode.com/problems/add-two-numbers/discuss/1835535/JavaC%2B%2B-A-very-beautiful-explanation-EVER-exists