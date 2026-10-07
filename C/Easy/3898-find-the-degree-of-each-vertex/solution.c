/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDegrees(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    *returnSize = matrixSize;
    int* ans = (int*)malloc(matrixSize * sizeof(int));

    for (int i = 0; i < matrixSize; i++) {
        int count = 0;
        for (int j = 0; j < matrixSize; j++) {
            if (matrix[i][j] == 1) {
                count++;
            }
        }
        ans[i] = count;
    }

    return ans;
}
