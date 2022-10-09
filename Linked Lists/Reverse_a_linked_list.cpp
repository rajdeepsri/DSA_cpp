//LEETCODE 206. REVERSE A LINKED LIST
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
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = curr->next;
        
        while(curr != NULL){
            curr->next = prev;
            prev = curr;
            curr = forward;
            if(curr != NULL) forward = curr->next;
        }
        return prev;
    }
};

//2nd METHOD - USING RECURSION
/*
class Solution {
private:
    void rev(ListNode* &head, ListNode* prev, ListNode* curr){
        //base case
        if(curr == NULL){
            head=prev;
            return;
        }
        rev(head,curr,curr->next);
        curr->next = prev;
    }
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        rev(head,prev,curr);
        return head;
    }
};
*/

//3rd approach
/*
class Solution {
private:
    //it will return head of linked list
    ListNode* rev1(ListNode* &head){
        //base case
        if(head==NULL || head->next == NULL) return head;
        
        ListNode* chotaHead = rev1(head->next);
        head->next->next = head;
        head->next = NULL;
        return chotaHead;
    }
public:
    ListNode* reverseList(ListNode* head) {
        return rev1(head);
    }
};
*/
