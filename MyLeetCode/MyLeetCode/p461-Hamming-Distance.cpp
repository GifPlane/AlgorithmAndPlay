#include<iostream>

using namespace std;

/*
	海明距离
	1、先对两个数异或运算，结果中含有多少个1就表示有多少个不同的地方
	2、使用n = n & (n - 1)的方式可以得到一个二进制表示数中含有多少个1
*/
class Solution {
public:
	int hammingDistance(int x, int y) {

		int n = x ^ y;
		int count = 0;
		while (n){
			count++;
			n = n & (n - 1);
		}
		return count;

	}
};

void main() {
	Solution so;
	int s = so.hammingDistance(2, 4);
	cout << s << endl;

	system("pause");
}