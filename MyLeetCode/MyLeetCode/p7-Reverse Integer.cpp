/*
	1����һ������ؼ��ǽ��������⡣
	2������limits.h�������涨����int�͵����ֵ����Сֵ
	3��revX������long�ͣ���Ȼ�ڼ�������������Զ�����ˣ���ô�Ͳ��ܽ�������ж�
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