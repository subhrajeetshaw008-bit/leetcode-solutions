int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    int count[100] = {0};
    int* ans = (int*)malloc(2 * sizeof(int));
    int size = 0;

    for (int i = 0; i < numsSize; i++) {
        count[nums[i]] = count[nums[i]] + 1;
        if (count[nums[i]] == 2) {
            ans[size] = nums[i];
            size++;
        }
    }

    *returnSize = 2;
    return ans;
}