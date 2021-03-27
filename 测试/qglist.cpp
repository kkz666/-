#include<iostream>
#include"qglist.h"
using namespace std;
QGList::QGList() {
	head = new Node;
	tail = new Node;
	head->next = tail;
	head->prior = nullptr;
	tail->prior = head;
	ElemType num;
	cout << endl << "输入" << endl;
	cin >> num;
	while (1) {
		tail->data = num;
		cout << "继续？Y/N" << endl;
		cin.clear();
		char c;
		cin >> c;
		if (c == 'Y' || c == 'y') {
			cout << "输入" << endl;
			cin >> num;
			Node* temp = new Node;
			temp->next = nullptr;
			temp->prior = tail;
			tail->next = temp;
			tail = temp;
			tail->data = num;
		}
		else if (c == 'N' || c == 'n') {
			break;
		}
		else {
			cout << "bad enter " << endl;
			cin.clear();
			break;
		}
	}
	cout << "链表内容:" << endl;
	Node* T = head->next;
	while (T != nullptr) {
		cout << T->data << " ";
		T = T->next;
	}
}