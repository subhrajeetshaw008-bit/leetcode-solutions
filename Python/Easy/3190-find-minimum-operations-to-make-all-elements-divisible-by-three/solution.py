class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        operations = 0

        for i in range(len(nums)):
            if nums[i] % 3 != 0:
                operations = operations + 1

        return operations