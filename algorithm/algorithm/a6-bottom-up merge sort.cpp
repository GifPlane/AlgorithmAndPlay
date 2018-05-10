#include<iostream>
#include"assist.h"
#include<math.h>

using namespace std;

assist as;

/*
	不用递归的归并排序
	1、将小数组慢慢合并成大数组，而不是分裂成小数组，这个和a5的递归方法不同之处。
	2、首先要确定每一次循环要归并的小数组的大小，这里用sz表示，sz每一次的大小都会翻倍，直到超过N为止
	3、根据数组的大小确定数组的中间位置和结束位置
*/
template<typename T>
void sort(T &a) {
	int N = sizeof(a) / sizeof(a[0]);
	for (int sz = 1; sz < N; sz = sz*2){
		for (int lo = 0; lo < N-sz; lo += sz){
			as.merge(a, lo, lo + sz / 2, as.min((lo + sz), N - 1)); //为什么不是lo+sz-1?为什么不是lo+sz/2 - 1？
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