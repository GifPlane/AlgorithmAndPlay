#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {

		map<int, int> temp;

		for (int i = 0; i < nums.size(); i++)
		{
			temp[nums[i]] = i; //i记录元素出现在数组中的位置
//健对应元素，值对应该元素在数组中出现的位置。
		}
		vector<int> res;
		for (int i = 0; i < nums.size(); i++)
		{
			if (temp[target - nums[i]] != 0) //目标值-当前元素——>如果存在，那么可以得到他的位置。
			{
				int j = temp[target - nums[i]];
				if (i == j)continue; //如果位置相等，不符合条件
				res.push_back(i);
				res.push_back(j);
				break;
			}
		}
		return res;
	}
};

void main() {
	Solution so;
	vector<int> nums = { 2, 2, 4 };
	int target = 6;
	vector<int> res = so.twoSum(nums, target);
	for each (auto it in res)
	{
		cout << it << " ";
	}
	system("pause");
}
