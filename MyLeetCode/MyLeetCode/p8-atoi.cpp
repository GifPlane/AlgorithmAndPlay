#include<iostream>
#include<string>
#include<limits.h>

using namespace std;

/*
	atoi函数，将字符串转化为整数
	1、注意溢出问题
	2、注意正负号问题
	
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
			res = res * 10 + (int)(str[i] - '0'); //str[i] - '0'..在确保str[i]是数字的情况下，-‘0’就是他的数值了！
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