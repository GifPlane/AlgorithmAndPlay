#include<iostream>
#include<string>

using namespace std;

class Solution {
public:

	/*
		LeetCode第一的答案
		事实上，我认为这个答案不仅不能提高时间性能，而且占用了空间
		但是解法是相当巧妙的！
		核心思想是 将每次移动都存储起来
		首先需要建立一个数组，这个数组中有4个元素记录上下左右四个方向的移动次数。这四个元素的下标分别是：
		'D' - 'D'， 'U' - 'D'， 'L' - 'D'， 'R' - 'D'
		为什么是-'D'呢？因为确保这个数组的长度可以最小，你也可以用其他的代替。这样数组的长度就是0~'U'-'D'的长度了
		每一次移动，将对应的元素+1。怎么找到对应的元素？：
		movies[i] - 'D'就是对应的元素了。
		这样，每一次移动的步数都被记录了，最后只需要比较上下和左右的步数是否相等就可以了。

	*/
	bool judgeCircle(string moves) {
		int count[1 + 'U' - 'D'];
		count['D' - 'D'] = 0;
		count['U' - 'D'] = 0;
		count['L' - 'D'] = 0;
		count['R' - 'D'] = 0;
		for (int i = 0; i < moves.size(); ++i) {
			++count[moves[i] - 'D'];
		}
		return (count['D' - 'D'] == count['U' - 'D'] && count['L' - 'D'] == count['R' - 'D']);
	}

	/*
		我的方案：回到原点的时候，上下、左右偏移量均为0
	*/
	//bool judgeCircle(string moves) {
	//	int N = moves.length();
	//	if (N == 0) return true;
	//	if (N % 2 != 0) return false;

	//	int upDwon = 0;
	//	int rightLeft = 0;

	//	for each (char var in moves)
	//	{
	//		switch (var)
	//		{
	//		case 'U':
	//			upDwon++;
	//			break;
	//		case 'D':
	//			upDwon--;
	//			break;
	//		case 'R':
	//			rightLeft++;
	//			break;
	//		case 'L':
	//			rightLeft--;
	//			break;
	//		default:
	//			return false;
	//			break;
	//		}
	//	}
	//	if (upDwon == 0 & rightLeft == 0) return true;
	//	return false;
	//}
};

void main() {
	Solution so;
	bool test = so.judgeCircle("UULRDURLDDULD");
	cout << test << endl;
	system("pause");
}