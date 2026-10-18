class Solution:
    def convertDateToBinary(self, date: str) -> str:
        year = int(date[0:4])
        month = int(date[5:7])
        day = int(date[8:10])

        return self.toBinary(year) + "-" + self.toBinary(month) + "-" + self.toBinary(day)

    def toBinary(self, x):
        result = ""

        while x > 0:
            result = str(x % 2) + result
            x = x // 2

        return result