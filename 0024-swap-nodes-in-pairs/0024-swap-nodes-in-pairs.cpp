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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || (*head).next == NULL) return head;

        ListNode* curr = head;
        ListNode* prev = NULL;

        head = (*head).next;

        while(curr != NULL && (*curr).next != NULL){
            ListNode* temp = (*curr).next;

            (*curr).next = (*temp).next;
            (*temp).next = curr;

            if(prev != NULL) 
                (*prev).next = temp;

            prev = curr;
            curr = (*curr).next;
        }

        return head;
    }
};