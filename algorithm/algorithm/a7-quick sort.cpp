#include<iostream>

using namespace std;

/*
	快速排序
	1、先选择好一个中间值元素，事实上通常都是选择第一个元素
	2、接着将所有小于中间值的元素放在左边，大雨这个值的元素放在右边
	3、通过递归重复调用上面的操作。
*/

/*切分操作*/
template<typename T>
int partition(T &a, int lo, int hi){
	int i = lo, j = hi + 1;
	int v = a[lo];
	while (1){
		while (a[++i]<v) if (i == hi) break;
		while (v < a[--j])if (j == lo) break;
		if (i >= j) break;
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
//执行完上面的循环后，第一个元素并没有发生变化，但是我们需要把第一个元素放在中间，
//好让左边的元素小于这个元素，而右边的元素大于这个元素，因此需要将它和j对换。
	int temp = a[lo];
	a[lo] = a[j];
	a[j] = temp;
	return j;
}

/*递归操作*/
template<typename T>
void sort(T &a, int lo, int hi){
	if (hi <= lo) return;
	int j = partition(a, lo, hi);
	sort(a, lo, j - 1);
	sort(a, j + 1, hi);
//这里为什么是j-1和j+1而不是j
}

void main() {
	int a[] = { 5, 2, 4, 1, 0, 6, 25, 3, 30, 26};
	sort(a,0,9);
	for (int i = 0; i < 10; ++i){
		cout << a[i] << " ";
	}
	cout << endl;
	system("pause");
}