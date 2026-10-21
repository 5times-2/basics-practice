# ============================================================
# Attempt 1
# ============================================================
class Solution:
    def intersection(self, nums1: list[int], nums2: list[int]) -> list[int]:
        x = list(set(nums1))
        y = list(set(nums2))
        ans = []
        for i in x:
            for j in y:
                if i == j:
                    ans.append(i)
        ans = list(set(ans))
        return ans


# ============================================================
# Attempt 1
# ============================================================
class Solution:
    def intersection(self, nums1: list[int], nums2: list[int]) -> list[int]:
        return list(set(nums1) & set(nums2))
