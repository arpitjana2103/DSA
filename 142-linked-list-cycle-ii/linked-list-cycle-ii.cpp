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
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL) return NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        bool isCycle = false;

        while(fast != NULL && (*fast).next != NULL){
            slow = (*slow).next;
            fast = (*(*fast).next).next;

            if(slow == fast){
                isCycle = true;
                break;
            }
        }

        if(!isCycle) return NULL;

        ListNode* entry = head;

        while(entry != slow){
            entry = (*entry).next;
            slow = (*slow).next;
        }

        return entry;
    }
};