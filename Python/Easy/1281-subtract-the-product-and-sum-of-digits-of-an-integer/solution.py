class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        product = 1
        total = 0

        while n > 0:
            digit = n % 10
            product = product * digit
            total = total + digit
            n = n // 10

        return product - total