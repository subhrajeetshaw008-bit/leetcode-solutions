struct ListNode* reverseKGroup(struct ListNode* head, int k) {
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->val = 0;
    dummy->next = head;
    struct ListNode* prevGroupEnd = dummy;

    while (1) {
        struct ListNode* kth = prevGroupEnd;
        for (int i = 0; i < k; i++) {
            kth = kth->next;
            if (kth == NULL) {
                return dummy->next;
            }
        }

        struct ListNode* groupStart = prevGroupEnd->next;
        struct ListNode* nextGroupStart = kth->next;

        struct ListNode* prev = nextGroupStart;
        struct ListNode* current = groupStart;
        for (int i = 0; i < k; i++) {
            struct ListNode* temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
        }

        prevGroupEnd->next = prev;
        prevGroupEnd = groupStart;
    }
}