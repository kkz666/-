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
	cout << endl << "����" << endl;
	cin >> num;
	while (1) {
		tail->data = num;
		cout << "������Y/N" << endl;
		cin.clear();
		char c;
		cin >> c;
		if (c == 'Y' || c == 'y') {
			cout << "����" << endl;
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
	cout << "��������:" << endl;
	Node* T = head->next;
	while (T != nullptr) {
		cout << T->data << " ";
		T = T->next;
	}
}