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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == nullptr) {return l2;}
        if (l2 == nullptr) {return l1;}
        if (l1 == nullptr && l2 == nullptr) {return nullptr;}
        ListNode* ans = new ListNode(0);
        ListNode* first = ans;

        while (l1 != nullptr && l2 != nullptr){
            if(l1->val < l2->val){
                ans->val = l1->val;
                l1 = l1->next;
            }
            else{
                ans->val = l2->val;
                l2 = l2->next;
            }

            if (l1 != nullptr && l2 != nullptr) {
                ans->next = new ListNode(0);
                ans = ans->next;
            }
        }

        while(l1!=nullptr){
            ans->next = new ListNode(0);
            ans = ans->next;
            ans->val = l1->val;
            l1 = l1->next;
        }

        while(l2!=nullptr){
            ans->next = new ListNode(0);
            ans = ans->next;
            ans->val = l2->val;
            l2 = l2->next;
        }

        return first;
    }
};