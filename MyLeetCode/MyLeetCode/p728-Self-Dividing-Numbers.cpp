/*
	p728 自除数
	自除数 是指可以被它包含的每一位数除尽的数。

	例如，128 是一个自除数，因为 128 % 1 == 0，128 % 2 == 0，128 % 8 == 0。

	还有，自除数不允许包含 0 。

	给定上边界和下边界数字，输出一个列表，列表的元素是边界（含边界）内所有的自除数。

	输入：
	上边界left = 1, 下边界right = 22
	输出： [1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 15, 22]
*/

#include<iostream>
#include<vector>

using namespace std;

/*
	判断是否为自除数
	注意：如果这个数包含0，那么绝对不是自除数
*/
bool isSelfDividing(int self){

	int a = self;

	while (self){

		int b = self % 10;
		if (b == 0 || a % b != 0) {
			return false;
		}
		self = self / 10;
	}
	return true;
}

class Solution {
public:
	vector<int> selfDividingNumbers(int left, int right) {
		vector<int> vec;
		for (int i = left; i <= right; ++i){
			if (isSelfDividing(i)){
				vec.push_back(i);
			}
		}
		return vec;
	}
};

void main() {
	Solution so;
	vector<int> result = so.selfDividingNumbers(66, 708);
	for each (auto c in result)
	{
		cout << c << " ";
	}
	cout << endl;
	system("pause");
}