class Solution:
    def minElement(self, nums: List[int]) -> int:
        smallest = 1000

        for i in range(len(nums)):
            x = nums[i]
            digit_sum = 0

            while x > 0:
                digit_sum = digit_sum + x % 10
                x = x // 10

            if digit_sum < smallest:
                smallest = digit_sum

        return smallest