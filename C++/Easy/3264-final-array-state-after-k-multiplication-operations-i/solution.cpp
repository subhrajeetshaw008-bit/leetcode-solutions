class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for (int step = 0; step < k; step++) {
            int minIndex = 0;

            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] < nums[minIndex]) {
                    minIndex = i;
                }
            }

            nums[minIndex] = nums[minIndex] * multiplier;
        }

        return nums;
    }
};