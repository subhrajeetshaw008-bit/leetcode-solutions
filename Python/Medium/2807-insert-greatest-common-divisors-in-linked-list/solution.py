class Solution:
    def insertGreatestCommonDivisors(self, head: Optional[ListNode]) -> Optional[ListNode]:
        current = head

        while current != None and current.next != None:
            a = current.val
            b = current.next.val

            # find the gcd by counting down from the smaller number
            if a < b:
                smaller = a
            else:
                smaller = b

            gcd = 1
            for i in range(smaller, 0, -1):
                if a % i == 0 and b % i == 0:
                    gcd = i
                    break

            new_node = ListNode(gcd)
            new_node.next = current.next
            current.next = new_node

            current = new_node.next

        return head