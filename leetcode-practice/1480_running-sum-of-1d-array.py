class Solution:
    def runningSum(self, nums: list[int]) -> list[int]:
        size = len(nums)
        result = list()
        result.append(nums[0])
        c = 1
        while c < size: 
            result.append(result[c-1] + nums[c])
            c+=1
        return result



class Solution:
    def runningSum(self, nums: list[int]) -> list[int]:
        for c in range(1, len(nums)):
            nums[c] += nums[c-1]
        return nums