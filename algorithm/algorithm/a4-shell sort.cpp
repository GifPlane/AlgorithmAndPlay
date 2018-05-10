//#include<iostream>
//
//using namespace std;
//
///*
//	希尔排序
//	1、来源于插入排序
//	2、插入排序每次移动1个位置，有些时候是很浪费的。如何能一次位移多个字符，并且保证不会插错序呢？
//	3、引入一个间隔函数h，这个函数是变化的，可以用某一个固定的函数来表示，这个例子中，是一个数列：3 * h + 1，并且按照规律不断递减直到 h=1
//  4、当有序的时候，插入排序的效率是很高的，希尔排序就是利用了这一点！
//	*/
//template<typename T>
//void sort(T &a) {
//	int N = sizeof(a) / sizeof(a[0]);
//	int h = 1;
//	while (h < N / 3){
//		h = 3 * h + 1;
//	}
//	while (h >= 1){
//		for (int i = h; i < N; ++i){
//			for (int j = i; j >= h&&a[j] < a[j - h]; j -= h){
//				int temp = a[j];
//				a[j] = a[j - h];
//				a[j - h] = temp;
//			}
//		}
//		h = h / 3;
//	}
//}
//
//void main() {
//	int a[] = { 5, 2, 4, 1, 0, 6 };
//	sort(a);
//	for (int i = 0; i < 6; ++i){
//		cout << a[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//}