#include<iostream>

using namespace std;

/*
	插入排序
	1、数组每一次更新之后，左边会保存有序序列
	2、有序序列右边的第一个元素与有序序列最大值开始一一往左比较，只要达成新的有序序列，就开始下一轮循环
*/
template<typename T>
void sort(T &a) {
	int N = sizeof(a) / sizeof(a[0]);
	for (int i = 1; i < N; ++i) {
		for (int j = i; j > 0 && a[j] < a[j - 1]; --j){
			int temp = a[j];
			a[j] = a[j - 1];
			a[j - 1] = temp;
		}
	}
}

void main() {
	int a[] = { 5, 2, 4, 1, 0, 6 };
	sort(a);
	for (int i = 0; i < 6; ++i){
		cout << a[i] << " ";
	}
	cout << endl;
	system("pause");
}