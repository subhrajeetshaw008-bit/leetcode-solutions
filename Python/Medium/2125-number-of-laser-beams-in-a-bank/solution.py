class Solution:
    def numberOfBeams(self, bank: List[str]) -> int:
        previous = 0
        total = 0

        for i in range(len(bank)):
            current = 0
            for j in range(len(bank[i])):
                if bank[i][j] == '1':
                    current = current + 1

            if current > 0:
                total = total + previous * current
                previous = current

        return total