/*
	�ڶ��⣺��������������ʽ�洢�����֮�������������
	���ڻ���Ҫ���ǽ�λ���⣡
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
			int n = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry; //����ÿһλ��ֵ,�ڼ��Ͻ�λ
			tail->next = new ListNode(n % 10); //������һλ
			carry = n / 10; //carry��¼���ǽ�λ
			tail = tail->next; 
			l1 = l1 ? l1->next : NULL;
			l2 = l2 ? l2->next : NULL;
		}
		return head->next;
	}

	/*��������*/
	void traverse(ListNode *list) {
		ListNode* p = list->next;
		while (p != NULL){
			cout << p->val << " ";
			p = p->next;
		}
	}

	/*��ͷ����������*/
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

	/*��β����������*/
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