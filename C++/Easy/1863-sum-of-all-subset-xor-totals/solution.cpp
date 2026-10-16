class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int total = 0;

        for (int mask = 0; mask < (1 << n); mask++) {
            int xorValue = 0;
            for (int j = 0; j < n; j++) {
                if (mask & (1 << j)) {
                    xorValue = xorValue ^ nums[j];
                }
            }
            total = total + xorValue;
        }

        return total;
    }
};