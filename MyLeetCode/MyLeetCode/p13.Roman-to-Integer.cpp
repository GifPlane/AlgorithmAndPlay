#include<iostream>
#include<string>

using namespace std;

/*
	
	�������ֱ�
	I             1
	V             5
	X             10
	L             50
	C             100
	D             500
	M             1000

	����������ת��Ϊ����
	���磬 �������� 2 д�� II ����Ϊ�������ŷ��õĵ� 1��12 д�� XII ����Ϊ X + II �� 27 д��  XXVII, ��Ϊ XX + V + II ��

	�����������У�С�������ڴ�����ֵ��ұߡ�
	�� 4 ��д�� IIII������ IV������ 1 ������ 5 ����ߣ�����ʾ�������ڴ�����С���õ�����ֵ 4 ��
	ͬ���أ����� 9 ��ʾΪ IX���������ֻ���������������

	1��I���Է��� V (5) �� X (10) ����ߣ�����ʾ 4 �� 9��
	2��X���Է��� L (50) �� C (100) ����ߣ�����ʾ 40 �� 90��
	3��C���Է��� D (500) �� M (1000) ����ߣ�����ʾ 400 �� 900��
	����һ���������֣�����ת��������������ȷ���� 1 �� 3999 ��Χ�ڡ�
*/
class Solution {
public:
	int romanCharToInt(char c) {
		switch (c) {
		case 'I':
			return 1;
		case 'V':
			return 5;
		case 'X':
			return 10;
		case 'L':
			return 50;
		case 'C':
			return 100;
		case 'D':
			return 500;
		case 'M':
			return 1000;
		default:
			return 0;
		}
		return 0;
	}
	int romanToInt(string s) {
		int result = 0;
		if (s.empty()) return 0;
		if (s.size() == 1) {
			return romanCharToInt(s[0]);
		}
		int temp = romanCharToInt(s[0]); //�ѵ�ǰ���������ּ�¼����
		for (size_t i = 1; i < s.size(); ++i) {
			int v = romanCharToInt(s[i]);
			if (v > temp) { //���������µ��������ֵ�ʱ�򣬿�����temp�Ƚϣ����������˵������������Ĺ���
				result -= temp;
				temp = v;
			}
			else {
				result += temp;
				temp = v;
			}
		}
		result += temp; //��Ϊÿһ�ζ��Ǽ�����һ�μ�¼��ֵ�������µ�ֵ��ѭ���ﻹû��+����������Ӧ�ü������ֵ.
		return result;
	}
};

void main() {
	string s;
	cin >> s;
	Solution so;
	int res = so.romanToInt(s);
	cout << res << endl;
	system("pause");
}