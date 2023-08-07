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
    ListNode* reverse(ListNode* head){
        ListNode* current = head;
        ListNode* temp;
        ListNode* nextptr = head->next;
        while(nextptr != nullptr){
            temp = nextptr->next;
            nextptr->next = current;
            current = nextptr;
            nextptr = temp;
        }
        head->next = nullptr;
        return current;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slowptr = head;
        ListNode* fastptr = head->next;
        while(fastptr != nullptr && fastptr->next != nullptr){
            slowptr = slowptr->next;
            fastptr = fastptr->next->next;
        }
        ListNode* headrev = reverse(slowptr);
        while(head!=nullptr && headrev!= nullptr){
            if(head->val != headrev->val)
                return false;
            else{
                head = head->next;
                headrev = headrev->next;
            }
        }
        return true;
    }
};