#include<iostream>

using namespace std;

/*
	二分查找：
	1、数组必须是有序的
*/
int Rank(int key, int* a, int n) {
	int lo = 0;
	int hi = n - 1;
	while (lo <= hi) 
	{
		int mid = lo + (hi - lo) / 2;
		if (key < a[mid]) hi = mid - 1;
		else if (key > a[mid]) lo = mid + 1;
		else return mid;
	}
	return -1;
}

void main(){
	int a[10] = { 3, 5, 8, 11, 15, 20, 34, 55, 58, 60 };
	int res = Rank(15, a, 10);

	cout << res << endl;
	system("pause");
}