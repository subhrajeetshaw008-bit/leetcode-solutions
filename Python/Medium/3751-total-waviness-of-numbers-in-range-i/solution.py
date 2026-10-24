class Solution:
    def totalWaviness(self, num1: int, num2: int) -> int:
        total = 0

        for number in range(num1, num2 + 1):
            digits = []
            x = number

            while x > 0:
                digits.append(x % 10)
                x = x // 10

            # digits are stored backwards, but peaks and valleys
            # don't change when the order is reversed
            for i in range(1, len(digits) - 1):
                if digits[i] > digits[i - 1] and digits[i] > digits[i + 1]:
                    total = total + 1
                elif digits[i] < digits[i - 1] and digits[i] < digits[i + 1]:
                    total = total + 1

        return total