class Solution:
    def findDegrees(self, matrix: list[list[int]]) -> list[int]:
        ans = []
        for row in matrix:
            ans.append(sum(row))
        return ans    