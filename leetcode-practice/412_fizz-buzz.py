# ============================================================
# Attempt 1
# ============================================================
class Solution:
    def fizzBuzz(self, n: int) -> list[str]:
        result: list[str] = []
        for c in range(1, n+1):
            if c < 3 and c < 5:
                result.append(str(c))
            elif c % 5 == 0 and c % 3 == 0:
                result.append("FizzBuzz")
            elif c % 5 == 0:
                result.append("Buzz")
            elif c % 3 == 0:
                result.append("Fizz")
            else:
                result.append(str(c))
        return result

# ============================================================
# Attempt 2
# ============================================================
class Solution:
    def fizzBuzz(self, n: int) -> list[str]:
        result: list[str] = []
        for c in range(1, n+1):
            if c < 3 and c < 5:
                result.append(str(c))
            elif c % 5 == 0 and c % 3 == 0:
                result.append("FizzBuzz")
            elif c % 5 == 0:
                result.append("Buzz")
            elif c % 3 == 0:
                result.append("Fizz")
            else:
                result.append(str(c))
        return result