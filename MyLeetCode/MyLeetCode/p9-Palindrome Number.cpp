#include<iostream>
using namespace std;

class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0 || (x % 10 == 0 && x != 0))
			return false;

		int res = 0;
		while (x > res){ //但x <= res的时候，已经执行了一半了，可以直接比较两边的值。
			res = res * 10 + x % 10;
			x /= 10;
		}

		return x == res || x == res / 10;
	}
};

void main(){
	Solution so;
	bool res = so.isPalindrome(12321);
	cout << res << endl;
	system("pause");
}