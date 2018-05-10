#include<iostream>
#include<string>
#include<limits.h>

using namespace std;

/*
	atoi���������ַ���ת��Ϊ����
	1��ע���������
	2��ע������������
	
*/

class Solution {
public:
	int myAtoi(string str) {
		if (str.empty()) return 0;

		long int res = 0;
		int i = 0, flag = 1;

//		i = str.find_first_not_of(' ');
		while (str[i] == ' ' || str[i] == '0' && i < str.length()) {
			++i;
		}
		if (str[i] == '-') {
			flag = -1;
			++i;
		}
		else if (str[i] == '+') {
			flag = 1;
			++i;
		}
		for (; isdigit(str[i]) && res <= INT_MAX && i < str.size(); ++i) {
			res = res * 10 + (int)(str[i] - '0'); //str[i] - '0'..��ȷ��str[i]�����ֵ�����£�-��0������������ֵ�ˣ�
		}
		if (flag * res > INT_MAX) return INT_MAX;
		if (flag * res < INT_MIN) return INT_MIN;
		return flag * res;
	}
};

void main(){
	Solution so;
	int res = so.myAtoi("332f123f");
	cout << res << endl;
	system("pause");
}