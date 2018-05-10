/*
	����һ���ַ��� S ��һ���ַ� C������һ�������ַ��� S ��ÿ���ַ����ַ��� S �е��ַ� C ����̾�������顣

	ʾ�� 1:

	����: S = "loveleetcode", C = 'e'
	���: [3, 2, 1, 0, 1, 0, 0, 1, 2, 2, 1, 0]
	˵��:

	�ַ��� S �ĳ��ȷ�ΧΪ [1, 10000]��
	C ��һ�����ַ����ұ�֤���ַ��� S ����ַ���
	S �� C �е�������ĸ��ΪСд��ĸ��
*/

#include<iostream>
#include<vector>
#include<map>
#include<math.h>

using namespace std;

class Solution {
public:
	vector<int> shortestToChar(string S, char C) {
		vector<int> temp;
		vector<int> res;
		/*��¼C��λ��*/
		for (int i = 0; i < S.length(); ++i){
			if (S[i] == C){
				temp.push_back(i);
			}
		}
		/*���������ַ������Ƚ�λ�ò�ȡ����Сֵ*/
		for (int i = 0; i < S.length(); ++i){
			int smaller = abs(i - temp[0]); 
			for (int j = 0; j < temp.size();++j) {
				if (abs(i - temp[j]) < smaller) {
					smaller = abs(i - temp[j]); 
				}
			}
			res.push_back(smaller);
		}
		return res;
	}
};

void main() {
	Solution so;
	vector<int> res = so.shortestToChar("aaab", 'b');
	for each (auto i in res)
	{
		cout << i << " ";
	}
	cout << endl;

	system("pause");
}