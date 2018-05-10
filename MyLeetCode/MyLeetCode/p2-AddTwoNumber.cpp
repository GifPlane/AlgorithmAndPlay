/*
	第二题：两个数字以链表方式存储，相加之后再用链表输出
	现在还需要考虑进位问题！
*/
#include<iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) :val(x), next(NULL) {}
};

class Solution {
public:

	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode *head = new ListNode(0);
		ListNode *tail = head;
		int carry = 0;
		while (l1 || l2 || carry){
			int n = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry; //计算每一位的值,在加上进位
			tail->next = new ListNode(n % 10); //新增下一位
			carry = n / 10; //carry记录的是进位
			tail = tail->next; 
			l1 = l1 ? l1->next : NULL;
			l2 = l2 ? l2->next : NULL;
		}
		return head->next;
	}

	/*遍历链表*/
	void traverse(ListNode *list) {
		ListNode* p = list->next;
		while (p != NULL){
			cout << p->val << " ";
			p = p->next;
		}
	}

	/*向头部插入数据*/
	ListNode* ListNodeInsertH(ListNode* list) {
		int x;
		while (cin >> x)
		{
			if (x == 0) return list;
			ListNode *p = new ListNode(x);
			p->next = list->next;
			list->next = p;
		}
		return list;
	}

	/*向尾部插入数据*/
	ListNode* ListNodeInsertT(ListNode* list){
		int x;
		ListNode *p = list;
		while (cin >> x)
		{
			if (x == 0) return list;
			ListNode* r = new ListNode(x);
			p->next = r;
			p = r;
		}
		return list;
	}
};

void main(){
	Solution so;
	ListNode* l1 = so.ListNodeInsertH(new ListNode(0));
	ListNode* l2 = so.ListNodeInsertH(new ListNode(0));
	so.traverse(so.addTwoNumbers(l1, l2));
	system("pause");
}