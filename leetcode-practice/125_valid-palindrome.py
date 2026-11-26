class Solution:
    def isPalindrome(self, s: str) -> bool:
        if s == " ":
            return True
        
        result = ""
        
        for c in s:
            if c.isalnum():
                result += c
        result = result.lower()

        return ((result) == "".join(reversed(result)))
