int dayNumber(char* date, int* days) {
    int month = (date[0] - '0') * 10 + (date[1] - '0');
    int day = (date[3] - '0') * 10 + (date[4] - '0');

    int total = 0;
    for (int i = 0; i < month - 1; i++) {
        total = total + days[i];
    }

    total = total + day;
    return total;
}

int countDaysTogether(char* arriveAlice, char* leaveAlice, char* arriveBob, char* leaveBob) {
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