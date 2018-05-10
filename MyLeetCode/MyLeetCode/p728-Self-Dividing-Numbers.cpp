/*
	p728 �Գ���
	�Գ��� ��ָ���Ա���������ÿһλ������������

	���磬128 ��һ���Գ�������Ϊ 128 % 1 == 0��128 % 2 == 0��128 % 8 == 0��

	���У��Գ������������ 0 ��

	�����ϱ߽���±߽����֣����һ���б��б��Ԫ���Ǳ߽磨���߽磩�����е��Գ�����

	���룺
	�ϱ߽�left = 1, �±߽�right = 22
	����� [1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 15, 22]
*/

#include<iostream>
#include<vector>

using namespace std;

/*
	�ж��Ƿ�Ϊ�Գ���
	ע�⣺������������0����ô���Բ����Գ���
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