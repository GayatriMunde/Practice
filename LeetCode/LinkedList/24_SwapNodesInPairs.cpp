//Question: 
//https://leetcode.com/problems/swap-nodes-in-pairs/

//Testcases
//Input: head = [1,2,3,4]
//Output: [2,1,4,3]

//Input: head = [1,2,4]
//Output: [2,1,4]

//Approach: Recursive

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next)
            return head;
        
        ListNode *temp = head->next;
        ListNode *next = temp->next;
        temp->next = head;
        head = temp;
        temp->next->next = swapPairs(next);
        
        return head;
    }
};