/*
	1、二叉树的建立
	2、二叉树的插入
	3、二叉树的查找
*/

#include<iostream>
#include<string>

using namespace std;
class Node{
	public:
		int key;
		string val;	
		int N;
		Node* left;
		Node* right;
		Node(int key, string val, int N){
			this->key = key;
			this->val = val;
			this->N = N;
		}
	};


int size(Node* x){
	if (x == NULL) return 0;
	else return x->N;
}

/*查找算法*/
string get(Node* x, int key) {
	if (x == NULL){
		return NULL;
	}
	if (key < x->key) return get(x->left, key);
	else if (key > x->key) return get(x->right, key);
	else return x->val;
}

/*新增算法*/
Node* put(Node* x, int key, string val){
	if (x == NULL) return new Node(key, val, 1);
	if (key < x->key) x->left = put(x->left, key, val);
	else if (key > x->key) x->right = put(x->right, key, val);
	else x->val = val;
	x->N = size(x->left) + size(x->right) + 1;
	return x;
}

void main(){
	
	Node* root = new Node(0,"0",0);
	
	put(root, 10, "1");
	put(root, 11, "2");
	put(root, 8, "3");
	put(root, 4, "4");
	put(root, 5, "5");
	put(root, 20, "6");
	put(root, 18, "7");

	string a = get(root, 20);
	cout << a << endl;

	system("pause");
}