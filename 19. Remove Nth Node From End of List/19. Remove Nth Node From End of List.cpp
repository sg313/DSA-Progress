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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* fast = dummy;
        ListNode* slow = dummy;

        int j = 0;
        if (fast->next->next == NULL) {
            return NULL;
        }else {
            while (fast != NULL) {
                if (j > n) {
                    slow = slow->next;
                }
                fast = fast->next;
                j++;
            }
            ListNode* removedNode = slow->next;
            slow->next = slow->next->next;
            delete removedNode;
            return dummy->next;
        }
    }
};
