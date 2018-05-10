#include"assist.h"
#include<iostream>

using namespace std;

assist as;

/*
	�鲢����
*/
void sort(int* a, int lo, int hi){
	if (hi <= lo) return;
	int mid = lo + (hi - lo) / 2;
	sort(a, lo, mid);
	sort(a, mid + 1, hi);
	as.merge(a, lo, mid, hi); //����assist.h�����������кϲ���һ������
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