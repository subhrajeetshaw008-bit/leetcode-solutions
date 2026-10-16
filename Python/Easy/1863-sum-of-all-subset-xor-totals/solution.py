class Solution:
    def subsetXORSum(self, nums: List[int]) -> int:
        n = len(nums)
        total = 0

        for mask in range(1 << n):
            xor_value = 0
            for j in range(n):
                if mask & (1 << j):
                    xor_value = xor_value ^ nums[j]
            total = total + xor_value

        return total