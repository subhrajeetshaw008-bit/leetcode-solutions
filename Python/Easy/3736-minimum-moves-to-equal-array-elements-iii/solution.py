class Solution:
    def minMoves(self, nums: List[int]) -> int:
        biggest = nums[0]

        for i in range(len(nums)):
            if nums[i] > biggest:
                biggest = nums[i]

        moves = 0
        for i in range(len(nums)):
            moves = moves + (biggest - nums[i])

        return moves