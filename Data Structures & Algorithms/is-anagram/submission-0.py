class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s = sorted(s.lower().replace(" ",""))
        t = sorted(t.lower().replace(" ",""))
        if s == t:
            return True
        else:
            return False
