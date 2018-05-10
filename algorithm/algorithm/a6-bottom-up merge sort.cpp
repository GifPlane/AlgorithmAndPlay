#include<iostream>
#include"assist.h"
#include<math.h>

using namespace std;

assist as;

/*
	���õݹ�Ĺ鲢����
	1����С���������ϲ��ɴ����飬�����Ƿ��ѳ�С���飬�����a5�ĵݹ鷽����֮ͬ����
	2������Ҫȷ��ÿһ��ѭ��Ҫ�鲢��С����Ĵ�С��������sz��ʾ��szÿһ�εĴ�С���ᷭ����ֱ������NΪֹ
	3����������Ĵ�Сȷ��������м�λ�úͽ���λ��
*/
template<typename T>
void sort(T &a) {
	int N = sizeof(a) / sizeof(a[0]);
	for (int sz = 1; sz < N; sz = sz*2){
		for (int lo = 0; lo < N-sz; lo += sz){
			as.merge(a, lo, lo + sz / 2, as.min((lo + sz), N - 1)); //Ϊʲô����lo+sz-1?Ϊʲô����lo+sz/2 - 1��
		}
	}
}

void main() {
	int a[] = { 5, 2, 4, 1, 0, 6, 25, 3, 30, 26};
	sort(a);
	for (int i = 0; i < 10; ++i){
		cout << a[i] << " ";
	}
	cout << endl;
	system("pause");
}