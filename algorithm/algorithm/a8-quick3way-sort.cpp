#include<iostream>
#include"assist.h"

using namespace std;

assist as;

/*
	�����еĿ�������
	1��a[lo..lt-1] < v
		a[i] < v ʱ������a[lt]��a[i]������lt��i��+1
		����ȷ����lo..lt-1��С��v��ͬʱ������lt
	2��a[gt+1..hi] > v
		a[i] > v ��ʱ�򣬽���a[i]��a[gt]������gt-1�� ����i���䣬��������֮�󣬳���a[i] < v ʱ���ص�����1
		����ȷ����gt+1..hi������v��ͬʱ������gt+1..hi�ĳ���
	3��a[lt..i-1] = v
		��a[i] = v ʱ�����ý�����ֱ��i+1�� ����ȷ����lt..i-1������v��lt..i-1��һ��ʼ�ĳ���ֻ��1��û����һ���ظ����ݳ��Ⱦ�+1
	4��a[i..gt] ��ȷ��
		��һ�������ڲ�ȷ�������ݣ���i<gt�ǽ���ѭ������ʼ��һ�εݹ�
*/
template<typename T>
void sort(T &a, int lo, int hi){
	if (hi <= lo) return;
	int lt = lo, i = lo + 1, gt = hi;
	int v = a[lo];
	while (i <= gt) {
		if (a[i] < v) {
			as.exch(a, lt++, i++); //���Ȱ�lt��i���ݸ�exch�����ٽ���������
		}
		else if (a[i] > v){
			as.exch(a, i, gt--); 
		}
		else{
			++i; 
		}
	}
	/*�м�a[lt..i-1]��������ȵ�ֵ�����ز���ݹ�*/
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