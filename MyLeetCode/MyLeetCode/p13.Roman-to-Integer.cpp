#include<iostream>
#include<string>

using namespace std;

/*
	
	罗马数字表：
	I             1
	V             5
	X             10
	L             50
	C             100
	D             500
	M             1000

	将罗马数字转化为整数
	例如， 罗马数字 2 写做 II ，即为两个并排放置的的 1。12 写做 XII ，即为 X + II 。 27 写做  XXVII, 即为 XX + V + II 。

	在罗马数字中，小的数字在大的数字的右边。
	但 4 不写作 IIII，而是 IV。数字 1 在数字 5 的左边，所表示的数等于大数减小数得到的数值 4 。
	同样地，数字 9 表示为 IX。这个规则只适用于以下情况：

	1、I可以放在 V (5) 和 X (10) 的左边，来表示 4 和 9。
	2、X可以放在 L (50) 和 C (100) 的左边，来表示 40 和 90。
	3、C可以放在 D (500) 和 M (1000) 的左边，来表示 400 和 900。
	给定一个罗马数字，将其转换成整数。输入确保在 1 到 3999 范围内。
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
		int temp = romanCharToInt(s[0]); //把当前的罗马数字记录下来
		for (size_t i = 1; i < s.size(); ++i) {
			int v = romanCharToInt(s[i]);
			if (v > temp) { //，当输入新的罗马数字的时候，可以与temp比较，如果比他大，说明满足了相减的规则
				result -= temp;
				temp = v;
			}
			else {
				result += temp;
				temp = v;
			}
		}
		result += temp; //因为每一次都是加上上一次记录的值，而最新的值在循环里还没有+到，因此最后应该加上这个值.
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