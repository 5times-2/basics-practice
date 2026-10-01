# ============================================================
# Attempt 1 - Modify the original list
# ============================================================
class Solution:
    def getConcatenation(self, nums: list[int]) -> list[int]:
        for c in range(0, len(nums)):
            nums.append(nums[c])
        return nums
# Idea:
# - Loop through the original nums.
# - Append each original element to the end of nums.
#
# Important:
# - range(0, len(nums)) is created using the ORIGINAL length.
# - Even though nums becomes longer during the loop,
#   the loop still only runs len(nums) times based on the original length.
#
# Time:  O(n)
# Space: O(n) for the expanded list


# ============================================================
# Attempt 2 - Build a new list with for loops
# ============================================================
class Solution:
    def getConcatenation(self, nums: list[int]) -> list[int]:
        result = []
        for num in nums:
            result.append(num)
        for num in nums:
            result.append(num)
        return result

# ============================================================
# Attempt 3 - Python list concatenation
# ============================================================
class Solution:
    def getConcatenation(self, nums: list[int]) -> list[int]:
        return nums + nums
