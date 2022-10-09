//LEETCODE 141 142
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
private:
    ListNode* hasCycle(ListNode* &head) {
        if(head==NULL) return nullptr;
        ListNode *fast = head;
        ListNode *slow = head;
        
        while(fast!=nullptr && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow) return fast;
        }
        return nullptr;
    }
public:
    ListNode *detectCycle(ListNode *head) {
        if(hasCycle(head)==NULL) return nullptr;
        
        ListNode *curr = hasCycle(head);
        ListNode *temp = head;
        
        while(curr!=temp){
            curr=curr->next;
            temp=temp->next;
        }
        return curr;
    }
};