# ============================================================
# Attempt 1
# ============================================================
class Solution:
    def maximumWealth(self, accounts: list[list[int]]) -> int:
        sum = 0
        result = 0
        for a in range(0, len(accounts)):
            for b in range(0, len(accounts[a])):
                sum = accounts[a][b] + sum
            if sum >= result:
                result = sum
            sum = 0

        return result

# ============================================================
# Attempt 2
# ============================================================
class Solution:
    def maximumWealth(self, accounts: list[list[int]]) -> int:
        result = 0
        for a in accounts:
            result = max(result, sum(a))
        return result
