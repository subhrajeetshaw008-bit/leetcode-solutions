int numberOfBeams(char** bank, int bankSize) {
    int previous = 0;
    int total = 0;

    for (int i = 0; i < bankSize; i++) {
        int current = 0;
        for (int j = 0; bank[i][j] != '\0'; j++) {
            if (bank[i][j] == '1') {
                current = current + 1;
            }
        }

        if (current > 0) {
            total = total + previous * current;
            previous = current;
        }
    }

    return total;
}