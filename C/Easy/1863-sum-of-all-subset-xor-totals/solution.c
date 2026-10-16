int subsetXORSum(int* nums, int numsSize) {
    int total = 0;

    for (int mask = 0; mask < (1 << numsSize); mask++) {
        int xorValue = 0;
        for (int j = 0; j < numsSize; j++) {
            if (mask & (1 << j)) {
                xorValue = xorValue ^ nums[j];
            }
        }
        total = total + xorValue;
    }

    return total;
}