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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* pList = new ListNode(0);
        ListNode* prev = nullptr;
        ListNode* ret = pList;
        
        int over = 0;
        while (l1 != nullptr || l2 != nullptr || over != 0)
        {
            int sum = over;
            over = 0;
            
            if (l1)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            
            if (l2)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            
            if (sum >= 10)
            {
                sum -= 10;
                over = 1;
            }
            
            if (pList == nullptr)
            {
                pList = new ListNode(0);
                prev->next = pList;
            }
            
            pList->val = sum;
            prev = pList;
            pList = pList->next;            
        }
        
        return ret;
    }
};