class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        total = 0
        for i in range(len(nums)):
            total = total + nums[i]

        operations = 0
        while total % k != 0:
            total = total - 1
            operations = operations + 1

        return operations