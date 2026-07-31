class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxp = 0
        minp = prices[0]
        for s in range(0, len(prices)):
            minp = min(minp, prices[s])
            maxp = max(maxp, prices[s] - minp)
        return maxp
