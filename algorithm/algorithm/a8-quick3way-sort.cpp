#include<iostream>
#include"assist.h"

using namespace std;

assist as;

/*
	三段切的快速排序
	1、a[lo..lt-1] < v
		a[i] < v 时，交换a[lt]和a[i]，并让lt、i都+1
		这样确保了lo..lt-1都小于v，同时增加了lt
	2、a[gt+1..hi] > v
		a[i] > v 的时候，交换a[i]和a[gt]，并让gt-1， 保持i不变，但交换完之后，出现a[i] < v 时，回到步骤1
		这样确保了gt+1..hi都大于v，同时增加了gt+1..hi的长度
	3、a[lt..i-1] = v
		当a[i] = v 时，不用交换，直接i+1， 这样确保了lt..i-1都等于v（lt..i-1）一开始的长度只有1，没出现一个重复数据长度就+1
	4、a[i..gt] 不确定
		这一部分属于不确定的数据，当i<gt是结束循环，开始下一次递归
*/
template<typename T>
void sort(T &a, int lo, int hi){
	if (hi <= lo) return;
	int lt = lo, i = lo + 1, gt = hi;
	int v = a[lo];
	while (i <= gt) {
		if (a[i] < v) {
			as.exch(a, lt++, i++); //是先把lt和i传递给exch函数再进行自增的
		}
		else if (a[i] > v){
			as.exch(a, i, gt--); 
		}
		else{
			++i; 
		}
	}
	/*中间a[lt..i-1]部分是相等的值，不必参与递归*/
	sort(a, lo, lt - 1);
	sort(a, gt + 1, hi);
}

void main() {
	int a[] = { 8, 10, 6, 1, 1, 7, 1, 3, 30, 26 };

	sort(a,0,9);
	for (int i = 0; i < 10; ++i){
		cout << a[i] << " ";
	}
	cout << endl;
	system("pause");
}