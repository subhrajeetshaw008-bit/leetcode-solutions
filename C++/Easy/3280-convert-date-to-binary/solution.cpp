class Solution {
public:
    string toBinary(int x) {
        string result = "";

        while (x > 0) {
            result = to_string(x % 2) + result;
            x = x / 2;
        }

        return result;
    }

    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        return toBinary(year) + "-" + toBinary(month) + "-" + toBinary(day);
    }
};