# ============================================================
# Attempt 1
# ============================================================
class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        max = 0
        diff = 0
        for x in prices:
            xIndex = prices.index(x)
            for y in prices[xIndex:]:
                yIndex = prices.index(y)
                if (y - x) > 0:
                    diff = (y - x)
                if max < diff:
                    max = diff
        return max

# ============================================================
# Attempt 2
# ============================================================
class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        ans = 0
        diff = 0
        top = 0
        for x in prices:
            xIndex = prices.index(x)
            top = max(prices[xIndex:])
            if (top > x):
                diff = top - x
            if diff > ans:
                ans = diff
        return ans

# 前兩次都會超時，因為每次都要找最大值

# ============================================================
# Attempt 3
# ============================================================
class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        ans = 0
        diff = 0
        bottom = prices[0]
        for x in prices:
            if x < bottom:
                bottom = x

            diff = x - bottom
            
            if diff > ans:
                ans = diff
        return ans
