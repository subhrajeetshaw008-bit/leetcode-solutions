class Solution:
    def minimumSum(self, num: int) -> int:
        digits = []

        while num > 0:
            digits.append(num % 10)
            num = num // 10

        digits.sort()

        new1 = digits[0] * 10 + digits[2]
        new2 = digits[1] * 10 + digits[3]

        return new1 + new2