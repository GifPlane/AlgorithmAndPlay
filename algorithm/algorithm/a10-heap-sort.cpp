#include<iostream>
#include"assist.h"

using namespace std;

assist as;

template<typename T>
void sink(T& a, int k, int n) {
	int j;
	/*这里要判断k==0的情况，如果不想要这个判断，那么数组中的a[0]是不参与排序的！*/
	while (2 * k <= n){
		if (k == 0) {
			j = 1;
		}
		else {
			j = 2 * k;
		}
		if (j < n && a[j] < a[j + 1]) ++j;
		if (a[j] < a[k])break;
		as.exch(a, k, j);
		k = j;
	}
}

template<typename T>
void sort(T& a){
	int N = sizeof(a)/sizeof(a[0]) - 1;
	/*
		遍历每一个父节点，因为父节点可定是在N/2之前的
		for循环的目的是先构造一个堆
	*/
	for (int k = N / 2; k >= 0; k--){
		sink(a, k, N);
	}
	/*
		在构造好堆的基础下：
		1、每次都将a[0]和a[N]交换，并让N-1
		2、每次交换之后又用下沉操作，将数组恢复堆的状态,注意，此时恢复堆有序状态只是数组的一部分，为什么呢？
		因为N-1了，我们已经把数组中最大的数，它原来在a[0]的放到a[N]那里去了！，而且我又让N-1，所以我每一次都把最大的数字向后放了！就是这样完成了堆排序的！
	*/
	while (N > 0){
		as.exch(a, 0, N--);
		sink(a, 0, N);
	}
}


void main() {
	int a[] = { 8, 8, 10, 6, 1, 1, 7, 1, 3, 30, 26 };
	
	sort(a);
	for (int i = 0; i < 11; ++i){
		cout << a[i] << " ";
	}
	cout << endl;
	system("pause");
}