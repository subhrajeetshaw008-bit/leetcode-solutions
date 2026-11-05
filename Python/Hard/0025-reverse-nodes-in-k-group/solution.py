class Solution:
    def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        dummy = ListNode(0)
        dummy.next = head
        prevGroupEnd = dummy

        while True:
            # find the k-th node of this group
            kth = prevGroupEnd
            for i in range(k):
                kth = kth.next
                if kth == None:
                    return dummy.next

            groupStart = prevGroupEnd.next
            nextGroupStart = kth.next

            # reverse the k nodes
            prev = nextGroupStart
            current = groupStart
            for i in range(k):
                temp = current.next
                current.next = prev
                prev = current
                current = temp

            # connect to the previous part
            prevGroupEnd.next = prev
            prevGroupEnd = groupStart