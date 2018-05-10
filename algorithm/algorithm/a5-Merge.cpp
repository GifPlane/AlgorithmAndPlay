#include"assist.h"
#include<iostream>

using namespace std;

assist as;

/*
	归并排序
*/
void sort(int* a, int lo, int hi){
	if (hi <= lo) return;
	int mid = lo + (hi - lo) / 2;
	sort(a, lo, mid);
	sort(a, mid + 1, hi);
	as.merge(a, lo, mid, hi); //来自assist.h，将两个序列合并成一个序列
}

void main() {
	int a[] = { 5, 2, 4, 1, 0, 6, 25, 3, 30, 26 };
	sort(a, 0, 9);
	for (int i = 0; i < 10; ++i){
		cout << a[i] << " ";
	}
	cout << endl;
	system("pause");
}