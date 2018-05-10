
class assist{
public:

	int min(int a, int b) {
		return a <= b ? a : b;
	}

	/*原地归并辅助算法
         ij分别从两个数组起始处递增，比较他们的值，将小的值依次放在a数组。
疑问，事实上，这也不能保证左边数组的元素小于右边数组？
*/
	void merge(int* a, int lo, int mid, int hi){
		//将a[lo..mid]和a[mid+1..hi]归并
		int *aux = new int[hi];
		for (int k = lo; k <= hi; ++k){
			aux[k] = a[k];
		}
		int i = lo, j = mid + 1;
		for (int k = lo; k <= hi; ++k){
			if (i > mid) a[k] = aux[j++];
			else if (j > hi) a[k] = aux[i++];
			else if (aux[j] < aux[i]) a[k] = aux[j++];
			else a[k] = aux[i++];
		}
	}
	/*交换元素*/
	void exch(int *a, int i, int j) {
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
};