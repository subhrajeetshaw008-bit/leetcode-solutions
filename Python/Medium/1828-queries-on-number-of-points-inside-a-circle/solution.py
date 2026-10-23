class Solution:
    def countPoints(self, points: List[List[int]], queries: List[List[int]]) -> List[int]:
        answer = []

        for j in range(len(queries)):
            cx = queries[j][0]
            cy = queries[j][1]
            r = queries[j][2]
            count = 0

            for i in range(len(points)):
                dx = points[i][0] - cx
                dy = points[i][1] - cy

                if dx * dx + dy * dy <= r * r:
                    count = count + 1

            answer.append(count)

        return answer