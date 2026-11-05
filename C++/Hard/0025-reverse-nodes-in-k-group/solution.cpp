class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prevGroupEnd = dummy;

        while (true) {
            ListNode* kth = prevGroupEnd;
            for (int i = 0; i < k; i++) {
                kth = kth->next;
                if (kth == NULL) {
                    return dummy->next;
                }
            }

            ListNode* groupStart = prevGroupEnd->next;
            ListNode* nextGroupStart = kth->next;

            ListNode* prev = nextGroupStart;
            ListNode* current = groupStart;
            for (int i = 0; i < k; i++) {
                ListNode* temp = current->next;
                current->next = prev;
                prev = current;
                current = temp;
            }

            prevGroupEnd->next = prev;
            prevGroupEnd = groupStart;
        }
    }
};