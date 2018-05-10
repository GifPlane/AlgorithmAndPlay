#include<iostream>

assist as;

class MXPQ {
public:
	int* pq;
	int N = 0;

	void swim(int k);
	void sink(int k);

	MXPQ(int maxN){
		pq = new int[sizeof(int) * 10];
	}

	bool isEmpty(){
		return N == 0;
	}
	int size(){
		return N;
	}
	void insert(int v){
		pq[++N] = v;
		swim(N);
	}
	int delMax(){
		int max = pq[1];
		as.exch(pq, 1, N--);
		pq[N + 1] = NULL;
		sink(1);
		return max;
	}
};
 
/*
	上浮操作
	插入一个数据之后，将这个数据向上浮动。
	首先判断和这个数据的父节点比较，如果大于父节点，就和父节点交换，如此循环直到k<=1
*/
void MXPQ::swim(int k){
	while (k > 1 && pq[k / 2] < pq[k]){
		as.exch(pq, k / 2, k);
		k = k / 2;
	}
}

/*
	下沉操作
	从根节点开始向下沉
*/
void MXPQ::sink(int k){
	while (2 * k <= N){
		int j = 2 * k;
		if (j < N && pq[j] < pq[j + 1]) ++j;
		if (pq[j] < pq[k])break;
		as.exch(pq, k, j);
		k = j;
	}
}