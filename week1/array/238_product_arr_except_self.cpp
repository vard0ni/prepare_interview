// https://leetcode.com/problems/product-of-array-except-self/
#include <bits/stdc++.h>

const int ZERO = []() 
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	return 0;
}();

class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        std::vector<int> ans(nums.size());
		ans[0] = 1;
		// prefix
		for (int i = 1; i < nums.size(); ++i)
		{
			// product of prefix elements
			ans[i] = ans[i-1] * nums[i-1];
		}
		for (const auto& x : ans) std::cout << x << " ";
		std::cout << std::endl;
		
		int suffix = 1;
		// nums.size()-2 -> предпоследний элемент массива
		for (int i = nums.size()-2; i >= 0; --i)
		{
			// product of soffix elements
			suffix *= nums[i+1];
			// product of prefix and suffix
			ans[i] *= suffix;
		}
		return ans;
    }
};

int main()
{
	std::vector<int> a = {1,2,3,4};
	auto ans = Solution().productExceptSelf(a);
	for (const auto& x : ans) std::cout << x << " ";
	std::cout << std::endl;
}