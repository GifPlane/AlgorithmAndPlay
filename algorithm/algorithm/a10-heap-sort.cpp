#include<iostream>
#include"assist.h"

using namespace std;

assist as;

template<typename T>
void sink(T& a, int k, int n) {
	int j;
	/*����Ҫ�ж�k==0��������������Ҫ����жϣ���ô�����е�a[0]�ǲ���������ģ�*/
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
		����ÿһ�����ڵ㣬��Ϊ���ڵ�ɶ�����N/2֮ǰ��
		forѭ����Ŀ�����ȹ���һ����
	*/
	for (int k = N / 2; k >= 0; k--){
		sink(a, k, N);
	}
	/*
		�ڹ���öѵĻ����£�
		1��ÿ�ζ���a[0]��a[N]����������N-1
		2��ÿ�ν���֮�������³�������������ָ��ѵ�״̬,ע�⣬��ʱ�ָ�������״ֻ̬�������һ���֣�Ϊʲô�أ�
		��ΪN-1�ˣ������Ѿ�������������������ԭ����a[0]�ķŵ�a[N]����ȥ�ˣ�������������N-1��������ÿһ�ζ����������������ˣ�������������˶�����ģ�
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