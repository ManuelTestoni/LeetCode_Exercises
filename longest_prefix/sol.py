class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        if not strs:
            return ""
        
        prefisso = strs[0]
        
        for s in strs[1:]:
            # riduco prefisso finché s non inizia con prefisso
            while not s.startswith(prefisso):
                prefisso = prefisso[:-1]
                if not prefisso:
                    return ""
        
        return prefisso
