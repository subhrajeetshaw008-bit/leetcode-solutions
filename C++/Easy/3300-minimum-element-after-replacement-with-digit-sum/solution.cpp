class Solution {
public:
    int minElement(vector<int>& nums) {
        int smallest = 1000;

        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            int digitSum = 0;

            while (x > 0) {
                digitSum = digitSum + x % 10;
                x = x / 10;
            }

            if (digitSum < smallest) {
                smallest = digitSum;
            }
        }

        return smallest;
    }
};