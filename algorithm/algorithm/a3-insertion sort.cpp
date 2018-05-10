#include<iostream>

using namespace std;

/*
	��������
	1������ÿһ�θ���֮����߻ᱣ����������
	2�����������ұߵĵ�һ��Ԫ���������������ֵ��ʼһһ����Ƚϣ�ֻҪ����µ��������У��Ϳ�ʼ��һ��ѭ��
*/
template<typename T>
void sort(T &a) {
	int N = sizeof(a) / sizeof(a[0]);
	for (int i = 1; i < N; ++i) {
		for (int j = i; j > 0 && a[j] < a[j - 1]; --j){
			int temp = a[j];
			a[j] = a[j - 1];
			a[j - 1] = temp;
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