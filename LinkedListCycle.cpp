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
    bool hasCycle(ListNode *head) {
        // if there are no nodes/ just one node then there are no cycles so we return false
        if(head == NULL || head->next == NULL)
            return false;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(slow != NULL && fast != NULL){
            if(slow == fast)
                return true;
            else{
                slow = slow->next;
                // If while incrementing fast if we encounter end of the list then we return false
                if(fast->next == NULL || fast->next->next == NULL)
                    return false;
                fast = fast->next->next;
            }
        }
        return false;
    }
};
