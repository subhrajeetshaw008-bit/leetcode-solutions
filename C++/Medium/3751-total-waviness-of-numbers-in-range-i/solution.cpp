class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int total = 0;

        for (int number = num1; number <= num2; number++) {
            vector<int> digits;
            int x = number;

            while (x > 0) {
                digits.push_back(x % 10);
                x = x / 10;
            }

            for (int i = 1; i < (int)digits.size() - 1; i++) {
                if (digits[i] > digits[i - 1] && digits[i] > digits[i + 1]) {
                    total = total + 1;
                } else if (digits[i] < digits[i - 1] && digits[i] < digits[i + 1]) {
                    total = total + 1;
                }
            }
        }

        return total;
    }
};