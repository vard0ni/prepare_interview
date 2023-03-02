// https://leetcode.com/problems/maximum-subarray/
#include <bits/stdc++.h>

const int ZERO = []() 
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	return 0;
}();

class Solution {
public:
    int maxSubArray(const std::vector<int>& nums) {
        int curr = nums[0];
		int totalMax = nums[0];
		for (size_t i = 1; i < nums.size(); ++i)
		{
			curr = std::max(curr + nums[i], nums[i]);
			totalMax = std::max(totalMax, curr);
		}
		return totalMax;
    }
};

int main()
{
	std::vector<int> a = {5,4,-1,7,8};
	int ans = Solution().maxSubArray(a);
	std::cout << ans << std::endl;
}