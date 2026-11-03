int minMoves(int* nums, int numsSize) {
    int biggest = nums[0];

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > biggest) {
            biggest = nums[i];
        }
    }

    int moves = 0;
    for (int i = 0; i < numsSize; i++) {
        moves = moves + (biggest - nums[i]);
    }

    return moves;
}