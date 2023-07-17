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
        ListNode* curr = head;
        ListNode* headptr = head;
        if(head == nullptr)
            return head;
        if(head->next == nullptr)
            return head;
        ListNode* nextptr = head->next;
        ListNode* temp = curr;
        while(nextptr != nullptr){
            curr = nextptr;
            nextptr = nextptr->next;
            curr->next =  temp;
            temp = curr;
        }
        headptr->next = nullptr;
        return curr;
    }
};