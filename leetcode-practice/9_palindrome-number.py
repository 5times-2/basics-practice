# ============================================================
# Attempt 1
# ============================================================
class Solution:
    def isPalindrome(self, x: int) -> bool:
        s = str(x)
        if x < 0:
            arr = [s[0]] + list(s[1:])
        else:
            arr = list(s)
        arrO = arr.copy()
        arr.reverse()
        return (arr == arrO)



# ============================================================
# Attempt 2
# ============================================================
class Solution:
    def isPalindrome(self, x: int) -> bool:
        return ((arr := list(str(x))) == (arrR := list(reversed(str(x)))))