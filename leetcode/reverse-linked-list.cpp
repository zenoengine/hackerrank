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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr)
        {
            return nullptr;
        }
        
        ListNode* pprev = nullptr;
        ListNode* prev = nullptr;
        ListNode* current = head;
        while (current)
        {
            pprev = prev;
            prev = current;
            current = current->next;
            if(pprev && prev)
            {
                prev->next = pprev;
                if (pprev == head){
                    pprev->next = nullptr;
                }
            }
        }
        
        if(pprev && prev)
        {
            prev->next = pprev;
        }
        
        return prev;
    }
};