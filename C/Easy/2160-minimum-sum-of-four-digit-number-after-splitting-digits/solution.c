int minimumSum(int num) {
    int digits[4];
    int size = 0;

    while (num > 0) {
        digits[size] = num % 10;
        size++;
        num = num / 10;
    }

    // simple bubble sort
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3 - i; j++) {
            if (digits[j] > digits[j + 1]) {
                int temp = digits[j];
                digits[j] = digits[j + 1];
                digits[j + 1] = temp;
            }
        }
    }

    int new1 = digits[0] * 10 + digits[2];
    int new2 = digits[1] * 10 + digits[3];

    return new1 + new2;
}