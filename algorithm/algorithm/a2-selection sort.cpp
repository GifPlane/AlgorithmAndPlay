#include<iostream>

using namespace std;

/*
	选择排序：
	1、从选择数组的第一个元素开始，和之后的所有元素对比，碰到比他小的就和它交换位置。
	2、执行完上一个步骤之后，继续下一个元素重复上一个步骤。
*/
template<typename T>
void sort(T& a){
	int n = sizeof(a) / sizeof(a[0]); //数组的长度
	for (int i = 0; i < n; ++i){
		int min = i;
		for (int j = i + 1; j < n; ++j){
			if (a[j] < a[min]) {
				//交换a[j]和a[min]
				int temp = a[j];
				a[j] = a[min];
				a[min] = temp;
			}
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