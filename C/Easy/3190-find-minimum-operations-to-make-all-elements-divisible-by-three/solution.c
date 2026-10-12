int minimumOperations(int* nums, int numsSize) {
    int operations = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 3 != 0) {
            operations = operations + 1;
        }
    }

    return operations;
}