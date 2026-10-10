# ============================================================
# Attempt 1: Time Limit Exceeded（TLE）＝答案算得出來，但算太久。
# ============================================================
class Solution:
    def countOdds(self, low: int, high: int) -> int:
        count = 0
        while (low <= high):
            if (low % 2 == 1):
                count = count + 1
            low = low + 1
        return count


# ============================================================
# Attempt 2
# ============================================================
class Solution:
    def countOdds(self, low: int, high: int) -> int:
        return (high+1)//2 - (low)//2