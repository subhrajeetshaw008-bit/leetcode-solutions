class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int previous = 0;
        int total = 0;

        for (int i = 0; i < bank.size(); i++) {
            int current = 0;
            for (int j = 0; j < bank[i].size(); j++) {
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
};