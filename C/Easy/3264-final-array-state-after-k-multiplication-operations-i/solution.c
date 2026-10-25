int* getFinalState(int* nums, int numsSize, int k, int multiplier, int* returnSize) {
    for (int step = 0; step < k; step++) {
        int minIndex = 0;

        for (int i = 0; i < numsSize; i++) {
            if (nums[i] < nums[minIndex]) {
                minIndex = i;
            }
        }

        nums[minIndex] = nums[minIndex] * multiplier;
    }

    *returnSize = numsSize;
    return nums;
}