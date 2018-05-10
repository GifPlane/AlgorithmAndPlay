/*
	��������Ϊ 2n ������, ��������ǽ���Щ���ֳ� n ��, ���� (a1, b1), (a2, b2), ..., (an, bn) ��ʹ�ô�1 �� n �� min(ai, bi) �ܺ����

	ʾ�� 1:

	����: [1,4,3,2]

	���: 4
	����: n ���� 2, ����ܺ�Ϊ 4 = min(1, 2) + min(3, 4).
	��ʾ:

	n ��������,��Χ�� [1, 10000].
	�����е�Ԫ�ط�Χ�� [-10000, 10000].
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