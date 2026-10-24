int totalWaviness(int num1, int num2) {
    int total = 0;

    for (int number = num1; number <= num2; number++) {
        int digits[10];
        int size = 0;
        int x = number;

        while (x > 0) {
            digits[size] = x % 10;
            size++;
            x = x / 10;
        }

        for (int i = 1; i < size - 1; i++) {
            if (digits[i] > digits[i - 1] && digits[i] > digits[i + 1]) {
                total = total + 1;
            } else if (digits[i] < digits[i - 1] && digits[i] < digits[i + 1]) {
                total = total + 1;
            }
        }
    }

    return total;
}