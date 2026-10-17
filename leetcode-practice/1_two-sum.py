class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        sum = 0
        for i in range(len(nums)):
            for j in range(len(nums)):
                sum = 0
                sum = nums[i] + nums[j]
                if sum == target and i != j:
                    ans = [i, j]
                    return ans

