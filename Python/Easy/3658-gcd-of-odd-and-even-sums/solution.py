class Solution:
    def gcdOfOddEvenSums(self, n: int) -> int:
        sumOdd = 0
        sumEven = 0

        for i in range(1, n + 1):
            sumOdd = sumOdd + (2 * i - 1)
            sumEven = sumEven + (2 * i)

        a = sumOdd
        b = sumEven
        while b != 0:
            temp = b
            b = a % b
            a = temp

        return a