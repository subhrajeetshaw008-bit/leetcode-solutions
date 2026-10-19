class Solution:
    def findClosest(self, x: int, y: int, z: int) -> int:
        distance1 = x - z
        if distance1 < 0:
            distance1 = -distance1

        distance2 = y - z
        if distance2 < 0:
            distance2 = -distance2

        if distance1 < distance2:
            return 1
        elif distance2 < distance1:
            return 2
        else:
            return 0