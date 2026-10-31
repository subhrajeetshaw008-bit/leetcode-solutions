class Solution:
    def recoverOrder(self, order: List[int], friends: List[int]) -> List[int]:
        ans = []

        for i in range(len(order)):
            for j in range(len(friends)):
                if order[i] == friends[j]:
                    ans.append(order[i])

        return ans