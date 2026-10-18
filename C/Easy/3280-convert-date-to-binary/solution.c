void toBinary(int x, char* out) {
    char temp[20];
    int size = 0;

    while (x > 0) {
        temp[size] = (x % 2) + '0';
        size++;
        x = x / 2;
    }

    // digits came out backwards, so reverse them into out
    for (int i = 0; i < size; i++) {
        out[i] = temp[size - 1 - i];
    }
    out[size] = '\0';
}

char* convertDateToBinary(char* date) {
    int year = (date[0] - '0') * 1000 + (date[1] - '0') * 100 + (date[2] - '0') * 10 + (date[3] - '0');
    int month = (date[5] - '0') * 10 + (date[6] - '0');
    int day = (date[8] - '0') * 10 + (date[9] - '0');

    char* ans = (char*)malloc(30 * sizeof(char));
    char y[20], m[20], d[20];

    toBinary(year, y);
    toBinary(month, m);
    toBinary(day, d);

    sprintf(ans, "%s-%s-%s", y, m, d);
    return ans;
}