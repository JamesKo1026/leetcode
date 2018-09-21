/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// iteration
/*
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       ListNode* pre_node = NULL;
        while (head){
            ListNode* next_node = head -> next;
            head -> next = pre_node;
            pre_node = head;
            head = next_node;
        }
       return pre_node; 
    }
};
*/

// recursive
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head || !head -> next)  return head;
        else {
            ListNode* node = reverseList(head -> next);
            (head -> next) -> next = head;
            head -> next = NULL;
            return node;
        }
    }
};
