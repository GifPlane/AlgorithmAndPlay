#include<iostream>

using namespace std;

/*
	ѡ������
	1����ѡ������ĵ�һ��Ԫ�ؿ�ʼ����֮�������Ԫ�ضԱȣ���������С�ľͺ�������λ�á�
	2��ִ������һ������֮�󣬼�����һ��Ԫ���ظ���һ�����衣
*/
template<typename T>
void sort(T& a){
	int n = sizeof(a) / sizeof(a[0]); //����ĳ���
	for (int i = 0; i < n; ++i){
		int min = i;
		for (int j = i + 1; j < n; ++j){
			if (a[j] < a[min]) {
				//����a[j]��a[min]
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