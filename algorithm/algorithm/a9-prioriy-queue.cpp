#include<iostream>
#include"assist.h"
#include"heap.h"

using namespace std;

void main() {
	MXPQ mq(10);
	mq.insert(5);
	mq.insert(6);
	mq.insert(1);
	mq.insert(8);
	mq.insert(4);
	mq.insert(3);
	mq.insert(9);
	mq.insert(11);
	mq.insert(15);

	for (int i = 1; i <= mq.N; ++i){
		cout << mq.pq[i] <<" ";
	}

	cout << endl;

	system("pause");
}