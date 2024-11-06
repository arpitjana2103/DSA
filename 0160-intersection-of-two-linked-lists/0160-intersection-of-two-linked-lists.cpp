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
    int getSize(ListNode* head){
        int size = 0;
        ListNode* curr = head;

        while(curr != NULL){
            size ++;
            curr = (*curr).next;
        }

        return size;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int sizeA = getSize(headA);
        int sizeB = getSize(headB);

        while(sizeA > sizeB){
            sizeA --;
            headA = (*headA).next;
        }

        while(sizeB > sizeA){
            sizeB --;
            headB = (*headB).next;
        }

        while(headA != NULL && headB != NULL){
            if(headA == headB) return headA;
            headA = (*headA).next;
            headB = (*headB).next;
        }

        return NULL;
    }
};