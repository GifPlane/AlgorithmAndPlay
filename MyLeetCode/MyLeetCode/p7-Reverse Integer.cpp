/*
	1、这一道题最关键是解决溢出问题。
	2、加入limits.h，它里面定义了int型的最大值和最小值
	3、revX必须是long型，不然在计算过程中他就自动溢出了，那么就不能进行溢出判断
*/
#include<iostream>
#include<limits.h>

using namespace std;

static int x = []() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	return 0;
}();

class Solution {
public:
	int reverse(int x) {
		long revX = 0;
		while (x != 0){
			revX = revX * 10 + x % 10;
			if (revX > INT_MAX || revX < INT_MIN) return 0;
			x /= 10;
		}
		return (int)revX;
	}
};

void main(){
	Solution so;
	int x = so.reverse(-1534239);
	cout << x << endl;
	system("pause");

}