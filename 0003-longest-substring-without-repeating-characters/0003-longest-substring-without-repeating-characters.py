class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        l=0
        seen={}
        maxi=0
        for i,curr in enumerate(s):
            if curr in seen:
                l=max(l,seen[curr]+1)
            maxi=max(maxi,i-l+1)
            seen[curr]=i
        return maxi