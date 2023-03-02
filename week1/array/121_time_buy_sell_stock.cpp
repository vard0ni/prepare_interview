// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
#include <bits/stdc++.h>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int res = 0;
		int prevMin = INT_MAX;
		for (const auto& v : prices)
		{
			if (v - prevMin > res)
			{
				res = v - prevMin;
			}
			if (v < prevMin) prevMin = v;
		}
		return res;
    }
};

int main()
{
	std::vector<int> arr = {7,6,4,3,1};
	int ans = Solution().maxProfit(arr);
	std::cout << ans << std::endl;
}