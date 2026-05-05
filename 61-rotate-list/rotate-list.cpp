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
    ListNode* moveLastToFront(ListNode* head) {
        // Edge cases
        if (head == NULL || head->next == NULL)
            return head;

        ListNode* secondLast = NULL;
        ListNode* last = head;

        // Traverse to last node
        while (last->next != NULL) {
            secondLast = last;
            last = last->next;
        }

        // Break and reattach
        secondLast->next = NULL;
        last->next = head;
        head = last;

        return head;
    }
    int getLength(ListNode* head) {
        int count = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            count++;
            temp = temp->next;
        }

        return count;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL)
            return head;
        int n = getLength(head);
        k = k % n;

        ListNode* temp = head;
        for (int i = 0; i < k; i++) {
           head= moveLastToFront(head);
        }

        return head;
    }
};