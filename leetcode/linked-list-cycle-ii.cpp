/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//Floyd's Tortoise and Hare
class Solution {
public:
    unordered_set<ListNode *> s;
    ListNode *detectCycle(ListNode *head) {
        if (head == nullptr){
            return nullptr;
        }
        
        auto iter = s.find(head);
        if(iter != s.end()) {
            return head;
        }
        else{
            s.insert(head);
        }
        
        return detectCycle(head->next);
    }
};
// class Solution {
// public:
//     unordered_set<ListNode *> s;
//     ListNode *detectCycle(ListNode *head) {
//         if (head == nullptr){
//             return nullptr;
//         }
        
//         auto iter = s.find(head);
//         if(iter != s.end()) {
//             return head;
//         }
//         else{
//             s.insert(head);
//         }
        
//         return detectCycle(head->next);
//     }
// };