/*
	给定长度为 2n 的数组, 你的任务是将这些数分成 n 对, 例如 (a1, b1), (a2, b2), ..., (an, bn) ，使得从1 到 n 的 min(ai, bi) 总和最大。

	示例 1:

	输入: [1,4,3,2]

	输出: 4
	解释: n 等于 2, 最大总和为 4 = min(1, 2) + min(3, 4).
	提示:

	n 是正整数,范围在 [1, 10000].
	数组中的元素范围在 [-10000, 10000].
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
	int arrayPairSum(vector<int>& nums) {
		sort(nums.begin(), nums.end());

		vector<int>::iterator it;
		int result = 0;
		for (it = nums.begin(); it != nums.end(); it += 2){
			result += *it;
		}

		return result;
	}
};

void main() {
	Solution so;
	vector<int> nums = { 1, 3, 4, 2 };
	int res = so.arrayPairSum(nums);
	cout << res << endl;
	system("pause");
}