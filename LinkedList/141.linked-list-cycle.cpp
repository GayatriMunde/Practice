/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//Two pointer approch; one fast and other slow
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL || head -> next == NULL)   return false;
        
        //Initilaizing two pointers
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast -> next != NULL && fast -> next -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;

            //If the LL is cycle then at some point both slow and fast will be equal
            if (slow == fast)   return true;
        }
        
        return false;
    }
};