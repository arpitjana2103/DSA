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
    ListNode* middleNode(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && (*fast).next){
            fast = (*(*fast).next).next;
            slow = (*slow).next;
        }

        return slow;
    }

    ListNode* reverseList(ListNode* head){
        // (*headRef) = head
        //         1 -> 2 -> 3 -> 4 -> null
        // null <- 1 <- 2 <- 3 <- 4
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr != NULL){
            ListNode* temp = (*curr).next;
            (*curr).next = prev;
            prev = curr;
            curr = temp;
        }

        return prev;
    }

        /*
            1 â 2 â 3 â 2 â 1

                   null
                    â
            1 â 2 â 3 â 2 â 1

            |       |       |    
           fst     mid     lst

        */

    bool isPalindrome(ListNode* head) {
        if(head == NULL || (*head).next == NULL) return true;
        ListNode* midNode = middleNode(head);

        ListNode* fst = head;
        ListNode* lst = reverseList(midNode);

        while(lst != NULL){
            if((*fst).val != (*lst).val) 
                return false;
            lst = (*lst).next;
            fst = (*fst).next;
        }

        return true;
    }
};