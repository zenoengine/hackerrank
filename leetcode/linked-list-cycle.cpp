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
    unordered_set<ListNode *> nm;
    bool hasCycle(ListNode *head) {
        if (head == nullptr){
            return false;
        }
        
        ListNode * it = head;
        while (it->next) {
            if (nm.find(it) != nm.end()) {
                return true;
            }
            nm.insert(it);
            it = it->next;
        }
        
        return false;
    }
};