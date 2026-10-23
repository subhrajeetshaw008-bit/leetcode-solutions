int* countPoints(int** points, int pointsSize, int* pointsColSize, int** queries, int queriesSize, int* queriesColSize, int* returnSize) {
    int* answer = (int*)malloc(queriesSize * sizeof(int));

    for (int j = 0; j < queriesSize; j++) {
        int cx = queries[j][0];
        int cy = queries[j][1];
        int r = queries[j][2];
        int count = 0;

        for (int i = 0; i < pointsSize; i++) {
            int dx = points[i][0] - cx;
            int dy = points[i][1] - cy;

            if (dx * dx + dy * dy <= r * r) {
                count = count + 1;
            }
        }

        answer[j] = count;
    }

    *returnSize = queriesSize;
    return answer;
}