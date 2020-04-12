/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* first = head;
        ListNode* second = head;
        
        while(second->next!=0 && second->next->next!=0)
        {
            first = first->next;
            second = second->next->next;
        }
        
        return second->next == 0 ? first : first->next;
    }
};
