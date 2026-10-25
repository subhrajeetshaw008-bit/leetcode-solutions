class Solution:
    def getFinalState(self, nums: List[int], k: int, multiplier: int) -> List[int]:
        for step in range(k):
            minIndex = 0

            for i in range(len(nums)):
                if nums[i] < nums[minIndex]:
                    minIndex = i

            nums[minIndex] = nums[minIndex] * multiplier

        return nums
        