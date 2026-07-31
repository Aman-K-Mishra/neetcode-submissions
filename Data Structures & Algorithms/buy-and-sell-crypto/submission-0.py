class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxp = 0
        for s in range(0, len(prices)):
            maxp = max(maxp, prices[s] - min(prices[0:s+1]))
            print(s,min(prices[0:s+1]))
        return maxp
