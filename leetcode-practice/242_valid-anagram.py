# ============================================================
# Attempt 1
# ============================================================
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        arr1 = list(s)
        arr2 = list(t)
        arr1.sort()
        arr2.sort()
        status = 0
        round = 0
        if len(arr1) >= len(arr2):
            round = len(arr2)
        else:
            round = len(arr1)
        for i in range(round):
            if arr1[i] == arr2[i]:
                status = status + 1
        if status == round and len(arr1) == len(arr2):
            return True
        return False

# ============================================================
# Attempt 2
# ============================================================
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return sorted(s) == sorted(t)
