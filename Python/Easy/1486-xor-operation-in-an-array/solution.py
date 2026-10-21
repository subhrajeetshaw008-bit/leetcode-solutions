class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        result = 0

        for i in range(n):
            number = start + 2 * i
            result = result ^ number

        return result