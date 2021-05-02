//Question:
//Remove Duplicates from Sorted Linked List

//Testcase:
//Input: head = [1,1,2,3,3]
//Output: [1,2,3]

//Approach:
//Use two pointer approach

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next)   return head;
        ListNode *current = head, *next = head->next; 
        
        while(next){
            ListNode* nextNext = next->next;
            if (current->val == next->val){
                current->next = nextNext;
            }
            else
                current = current->next;
            next = nextNext;
        }
        
        return head;
    }
};