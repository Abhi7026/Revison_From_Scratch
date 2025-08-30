class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        max_len = 0
        n = len(s)
        
        for c in 'ABCDEFGHIJKLMNOPQRSTUVWXYZ':
            i = 0
            count = 0  
            
            for j in range(n):
                if s[j] != c:
                    count += 1
                
                while count > k:
                    if s[i] != c:
                        count -= 1
                    i += 1
                
                max_len = max(max_len, j - i + 1)
        
        return max_len