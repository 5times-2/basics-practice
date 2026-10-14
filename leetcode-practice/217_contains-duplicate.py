# ============================================================
# Attempt 1
# ============================================================
class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        for i in range(0, len(nums)):
            for j in range(0, len(nums)):
                if nums[i] == nums[j] and i != j:
                    return True
        return False

# ============================================================
# Attempt 2
# ============================================================
class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        return len(nums) != len(set(nums))

# ============================================================
# Attempt 3
# ============================================================
class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        nums.sort()
        for i in range(len(nums) - 1):
            if nums[i] == nums[i + 1]:
                    return True
        return False