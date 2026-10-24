class Solution {
public:
    int dayNumber(string date, int days[]) {
        int month = stoi(date.substr(0, 2));
        int day = stoi(date.substr(3, 2));

        int total = 0;
        for (int i = 0; i < month - 1; i++) {
            total = total + days[i];
        }

        total = total + day;
        return total;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int aliceStart = dayNumber(arriveAlice, days);
        int aliceEnd = dayNumber(leaveAlice, days);
        int bobStart = dayNumber(arriveBob, days);
        int bobEnd = dayNumber(leaveBob, days);

        int start = aliceStart;
        if (bobStart > start) {
            start = bobStart;
        }

        int end = aliceEnd;
        if (bobEnd < end) {
            end = bobEnd;
        }

        if (end < start) {
            return 0;
        }

        return end - start + 1;
    }
};