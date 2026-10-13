class Solution {
public:
    int digitFrequencyScore(int n) {
        int score = 0;

        while (n > 0) {
            int digit = n % 10;
            score = score + digit;
            n = n / 10;
        }

        return score;
    }
};