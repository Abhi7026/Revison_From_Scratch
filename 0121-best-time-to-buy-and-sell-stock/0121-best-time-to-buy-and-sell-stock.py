class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        pur_price=prices[0]
        maxi=0
        for i in prices[1:]:
            if pur_price>i:
                pur_price=i
            maxi=max(maxi,i-pur_price)
        return maxi