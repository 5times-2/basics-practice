# ============================================================
# Attempt 1
# ============================================================
class Solution:
    def singleNumber(self, nums: list[int]) -> int:
        for i in nums:
            cnt = nums.count(i)
            if cnt == 1:
                return i
