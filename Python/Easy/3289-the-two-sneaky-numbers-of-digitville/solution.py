class Solution:
    def getSneakyNumbers(self, nums: List[int]) -> List[int]:
        count = [0] * 100
        ans = []

        for i in range(len(nums)):
            count[nums[i]] = count[nums[i]] + 1
            if count[nums[i]] == 2:
                ans.append(nums[i])

        return ans