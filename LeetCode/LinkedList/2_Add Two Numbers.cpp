//Que: https://leetcode.com/problems/add-two-numbers/

//Approach 1: Recursive
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2, int rem = 0) {
        ListNode* l = new ListNode();
        if (l1 && l2){
            l->val = (l1->val + l2->val + rem) % 10;
            rem = (l1->val + l2->val + rem) / 10;
            
            l->next = addTwoNumbers(l1->next, l2->next, rem);
        }
        
        if (l1 && !l2){
            l->val = (l1->val + rem) % 10;
            rem = (l1->val + rem) / 10;
            
            l->next = addTwoNumbers(l1->next, l2, rem);
        }
        
        if (!l1 && l2){
            l->val = (l2->val + rem) % 10;
            rem = (l2->val + rem) / 10;
            
            l->next = addTwoNumbers(l1, l2->next, rem);
        }
        
        if (!l1 && !l2){
            if (rem == 0)
                return NULL;
            l->val = rem;
            return l;
        }
            
        return l;
    }
};
