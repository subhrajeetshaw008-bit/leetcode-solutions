class Solution:
    def digitFrequencyScore(self, n: int) -> int:
        score = 0

        while n > 0:
            digit = n % 10
            score = score + digit
            n = n // 10

        return score