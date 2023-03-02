// https://leetcode.com/problems/two-sum/
#include <bits/stdc++.h>

class Solution {
public:
	std::vector<int> twoSum(const std::vector<int>& arr, int target) 
	{
		std::unordered_map<int, int> m; // value : index

		for (int i = 0; i < arr.size(); ++i)
		{
			int diff = target - arr[i];
			auto it = m.find(diff);
			if (it != m.end()) // if find	
			{ 
				return {it->second, i}; // i - current element index; it->second - finded index
			}
			m[arr[i]] = i;
		}
		throw 1;
	}
};

int main()
{
	std::vector<int> a = {2,7,11,15};
	int t = 9;

	auto ans = Solution().twoSum(a, t);
	for (int x : ans)
	{
		std::cout << x << " ";
	}
	std::cout << std::endl;

	return 0;
}