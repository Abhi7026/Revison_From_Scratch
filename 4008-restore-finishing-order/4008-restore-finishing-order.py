class Solution:
    def recoverOrder(self, order: List[int], friends: List[int]) -> List[int]:
         friends_set = set(friends)
         ans = []
         for p in order:
            if p in friends_set:
                ans.append(p)
         return ans