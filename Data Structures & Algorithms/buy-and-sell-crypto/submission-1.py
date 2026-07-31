class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxp = 0
        minb = prices[0]
        for s in range(0, len(prices)):
            minb = min(minb, prices[s])
            maxp = max(maxp, prices[s] - minb)
        return maxp