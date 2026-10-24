class Solution:
    def countDaysTogether(self, arriveAlice: str, leaveAlice: str, arriveBob: str, leaveBob: str) -> int:
        days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

        aliceStart = self.dayNumber(arriveAlice, days)
        aliceEnd = self.dayNumber(leaveAlice, days)
        bobStart = self.dayNumber(arriveBob, days)
        bobEnd = self.dayNumber(leaveBob, days)

        start = aliceStart
        if bobStart > start:
            start = bobStart

        end = aliceEnd
        if bobEnd < end:
            end = bobEnd

        if end < start:
            return 0

        return end - start + 1

    def dayNumber(self, date, days):
        month = int(date[0:2])
        day = int(date[3:5])

        total = 0
        for i in range(month - 1):
            total = total + days[i]

        total = total + day
        return total