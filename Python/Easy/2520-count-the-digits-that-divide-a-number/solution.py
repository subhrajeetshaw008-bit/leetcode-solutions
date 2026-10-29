class Solution:
    def countDigits(self, num: int) -> int:
        count = 0
        x = num

        while x > 0:
            digit = x % 10
            if num % digit == 0:
                count = count + 1
            x = x // 10

        return count