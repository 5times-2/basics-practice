# ============================================================
# Attempt 1
# ============================================================
class Solution:
    def reverseString(self, s: list[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        lenth = len(s) - 1
        cc = lenth + 1
        result = []
        for c in range(0, cc):
            result.append(s[lenth])
            lenth = lenth - 1
        lenth = len(s) - 1
        for c in range(0, cc):
            s[c] = result[c]
# 使用一個新array存答案，再存回s。

# ============================================================
# Attempt 2
# ============================================================
class Solution:
    def reverseString(self, s: list[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        s.reverse()
