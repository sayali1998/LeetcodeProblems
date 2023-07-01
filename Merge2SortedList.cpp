class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* result = nullptr;
        if(list1 == nullptr){
            return list2;
        }
        if(list2 == nullptr){
            return list1;
        }
        if(list1->val <= list2->val){
           result = list1;
           list1 = list1->next;
        }
        else{
            result = list2;
            list2 = list2->next;
        }
        ListNode* current = result;
        while(list1 != nullptr && list2 != nullptr){
            if(list1->val <= list2->val){
                current->next = list1;
                list1 = list1->next;
            }
            else{
                current->next = list2;
                list2 = list2->next;
            }
            current = current->next;
        }
        if(list1 != nullptr){
            current->next = list1;
        }
        else{
            current->next = list2;
        }
        return result;
    }
};