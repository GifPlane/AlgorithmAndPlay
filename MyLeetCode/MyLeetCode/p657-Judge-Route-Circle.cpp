#include<iostream>
#include<string>

using namespace std;

class Solution {
public:

	/*
		LeetCode��һ�Ĵ�
		��ʵ�ϣ�����Ϊ����𰸲����������ʱ�����ܣ�����ռ���˿ռ�
		���ǽⷨ���൱����ģ�
		����˼���� ��ÿ���ƶ����洢����
		������Ҫ����һ�����飬�����������4��Ԫ�ؼ�¼���������ĸ�������ƶ����������ĸ�Ԫ�ص��±�ֱ��ǣ�
		'D' - 'D'�� 'U' - 'D'�� 'L' - 'D'�� 'R' - 'D'
		Ϊʲô��-'D'�أ���Ϊȷ���������ĳ��ȿ�����С����Ҳ�����������Ĵ��档��������ĳ��Ⱦ���0~'U'-'D'�ĳ�����
		ÿһ���ƶ�������Ӧ��Ԫ��+1����ô�ҵ���Ӧ��Ԫ�أ���
		movies[i] - 'D'���Ƕ�Ӧ��Ԫ���ˡ�
		������ÿһ���ƶ��Ĳ���������¼�ˣ����ֻ��Ҫ�Ƚ����º����ҵĲ����Ƿ���ȾͿ����ˡ�

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
		�ҵķ������ص�ԭ���ʱ�����¡�����ƫ������Ϊ0
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