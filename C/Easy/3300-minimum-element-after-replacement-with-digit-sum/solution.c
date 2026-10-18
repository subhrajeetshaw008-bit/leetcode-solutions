int minElement(int* nums, int numsSize) {
    int smallest = 1000;

    for (int i = 0; i < numsSize; i++) {
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