class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        lista = s.split()
        return len(lista[-1])